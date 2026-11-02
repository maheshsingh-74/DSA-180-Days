class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        unordered_set<char> ss;
        int x = 0;

        for (int i = 0; i < s.length(); i++) {
            while (ss.count(s[i])) {
                ss.erase(s[x]);
                x++;
            }

            ss.insert(s[i]);

            ans = max(ans, i - x + 1);
        }

        return ans;
    }
};