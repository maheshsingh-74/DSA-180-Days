import os
import time
import re
import requests
from bs4 import BeautifulSoup

# ==================== VALIDATED COOKIES ====================
LEETCODE_SESSION_VALUE = "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJfYXV0aF91c2VyX2lkIjoiMjIwNDg3MjUiLCJfYXV0aF91c2VyX2JhY2tlbmQiOiJhbGxhdXRoLmFjY291bnQuYXV0aF9iYWNrZW5kcy5BdXRoZW50aWNhdGlvbkJhY2tlbmQiLCJfYXV0aF91c2VyX2hhc2giOiI2MDU5ZWJmYTRjYmI1NTFlMzllMzYxYTMyYWZiZDQwMGRiMzVhYjIzZjQ2NjZlZjhmMDk5OTIwYTk0ZTFhNjk2Iiwic2Vzc2lvbl91dWlkIjoiZmQyNDQ5MjkiLCJpZCI6MjIwNDg3MjUsImVtYWlsIjoibWFoZXNoYmVuaXdhbDc0QGdtYWlsLmNvbSIsInVzZXJuYW1lIjoiQmVuaXdhbE1haGVzaDc0IiwidXNlcl9zbHVnIjoiQmVuaXdhbE1haGVzaDc0IiwiYXZhdGFyIjoiaHR0cHM6Ly9hc3NldHMubGVldGNvZGUuY29tL3VzZXJzL2RlZmF1bHRfYXZhdGFyLmpwZyIsInJlZnJlc2hlZF9hdCI6MTc4MjExMTM4MSwiaXAiOiIyNDA5OjQwZDI6NWU6ZTQ2OTo1ZDZlOjFiNjQ6Yzk0ZDo4NjI1IiwiaWRlbnRpdHkiOiIxNmZlZTM3NTU5ZGJkNDJiNDQ4MjA0NDQ2ZDAyMDg5ZiIsImRldmljZV93aXRoX2lwIjpbImIyOTdiOTI0ZWI2ZGFiYmU3NzdlNGNlNDQ2NzAyMzZiIiwiMjQwOTo0MGQyOjVlOmU0Njk6NWQ2ZToxYjY0OmM5NGQ6ODYyNSJdLCJfc2Vzc2lvbl9leHBpcnkiOjEyMDk2MDB9._czsPpdqSDUXap08vpSkGnFZAC_HNgyBGQMxRR_wb5Y"
CSRF_TOKEN_VALUE = "Dmc8aybJuImKcIfQM5pWyQjdHA79LdTS"
# ============================================================

HEADERS = {
    "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36",
    "Cookie": f"LEETCODE_SESSION={LEETCODE_SESSION_VALUE}; csrftoken={CSRF_TOKEN_VALUE}",
    "X-Csrftoken": CSRF_TOKEN_VALUE,
    "Referer": "https://leetcode.com/progress/",
    "Content-Type": "application/json"
}

def fetch_submissions(last_key=""):
    url = "https://leetcode.com/graphql"
    query = """
    query submissionList($offset: Int!, $limit: Int!, $lastKey: String) {
      submissionList(offset: $offset, limit: $limit, lastKey: $lastKey) {
        lastKey
        hasNext
        submissions {
          id
          lang
          titleSlug
          statusDisplay
        }
      }
    }
    """
    variables = {
        "offset": 0,
        "limit": 20,
        "lastKey": last_key if last_key else None
    }
    try:
        response = requests.post(url, json={"query": query, "variables": variables}, headers=HEADERS)
        if response.status_code == 200:
            return response.json().get('data', {}).get('submissionList', {})
    except Exception as e:
        print(f"Connection error: {e}")
    return None

def fetch_submission_code(submission_id):
    url = f"https://leetcode.com/submissions/detail/{submission_id}/"
    try:
        res = requests.get(url, headers=HEADERS)
        if res.status_code == 200:
            # Look for submissionCode inside the script blocks using safe string matching
            html_content = res.text
            match = re.search(r"submissionCode:\s*'(.*?)',", html_content)
            if match:
                code_raw = match.group(1)
                # Securely decode unicode escape sequences manually without throwing decoding faults
                try:
                    return code_raw.encode().decode('unicode-escape')
                except Exception:
                    # Fallback parser if standard decode errors out
                    return code_raw.replace('\\u000A', '\n').replace('\\u0009', '\t').replace('\\\'', "'").replace('\\\\', '\\')
    except Exception as e:
        print(f"Skipping extraction for ID {submission_id}: {e}")
    return None

def main():
    print("🚀 Connecting to LeetCode API...")
    has_next = True
    last_key = ""
    processed_slugs = set()
    global_submission_history = set()
    total_saved = 0

    while has_next:
        data = fetch_submissions(last_key)
        if not data or 'submissions' not in data:
            print("❌ Query stopped or token connection dropped.")
            break
            
        submissions = data['submissions']
        if not submissions:
            print("🏁 Checked history. Done!")
            break

        if submissions[0]['id'] in global_submission_history:
            print("\n⚠️ Duplicate data page detected. Ending fetch loop safely.")
            break

        for sub in submissions:
            sub_id = sub['id']
            global_submission_history.add(sub_id)
            
            slug = sub['titleSlug']
            status = sub['statusDisplay']
            lang = sub['lang']
            
            if status == "Accepted" and "cpp" in lang:
                if slug in processed_slugs:
                    continue
                    
                print(f"Processing: {slug}...")
                raw_code = fetch_submission_code(sub_id)
                
                if raw_code:
                    os.makedirs(slug, exist_ok=True)
                    filepath = os.path.join(slug, f"{slug}.cpp")
                    with open(filepath, "w", encoding="utf-8") as f:
                        f.write(raw_code)
                    
                    processed_slugs.add(slug)
                    total_saved += 1
                    time.sleep(0.8) # Quick safety delay

        has_next = data.get('hasNext', False)
        last_key = data.get('lastKey', "")
        
        if not has_next or not last_key:
            break
            
        time.sleep(0.5)

    print(f"\n🎉 Finished! Processed and saved {total_saved} unique C++ problem folders locally.")

if __name__ == "__main__":
    main()