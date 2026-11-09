class Solution {
private:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

public:
    int countVowelSubstrings(string word) {
        int n = word.length();
        vector<int> nextcons(n);
        int nextconsidx = n;

        for (int i = n - 1; i >= 0; i--) {
            nextcons[i] = nextconsidx;
            if (!isVowel(word[i])) {
                nextconsidx = i;
            }
        }

        int i = 0, j = 0;
        int cnt = 0;
        unordered_map<char, int> mp;

        while (j < n) {
            char ch = word[j];
            if (!isVowel(ch)) {
                mp.clear();
                i = j + 1;
                j++;
                continue;
            }

            mp[ch]++;

            while (mp.size() == 5) {
                
                cnt += nextcons[j] - j;

                mp[word[i]]--;
                if (mp[word[i]] == 0) {
                    mp.erase(word[i]);
                }
                i++;
            }

            j++;
        }

        return cnt;
    }
};