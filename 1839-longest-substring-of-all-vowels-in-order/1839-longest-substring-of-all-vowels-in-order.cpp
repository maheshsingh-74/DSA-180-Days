class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int n = word.length();
        if (n < 5)
            return 0;
        int letterseen = 1;
        int maxx = 1;
        int currmax = 1;
        for (int i = 1; i < n; i++) {
            if (word[i - 1] <= word[i]) {
                if (word[i - 1] != word[i])
                    letterseen++;
                currmax++;
            } else {
                if (letterseen == 5) {
                    maxx = max(maxx, currmax);
                }
                letterseen = 1;
                currmax = 1;
            }
            if (letterseen == 5) {
                maxx = max(maxx, currmax);
            }
        }
        if (maxx == 1)
            return 0;
        return maxx;
    }
};