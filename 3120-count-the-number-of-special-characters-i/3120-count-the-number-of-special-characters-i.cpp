class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<bool> lower(26, false);
        vector<bool> upper(26, false);
        
        for (char c : word) {
            if (c >= 'a' && c <= 'z') {
                lower[c - 'a'] = true;
            } else if (c >= 'A' && c <= 'Z') {
                upper[c - 'A'] = true;
            }
        }
        
        int specialCount = 0;
        for (int i = 0; i < 26; ++i) {
            if (lower[i] && upper[i]) {
                specialCount++;
            }
        }
        
        return specialCount;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna