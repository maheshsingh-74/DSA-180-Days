class Solution {
public:
    bool check(string word, char start, char end) {
        for (char& ch : word) {
            if (ch < start || ch > end)
                return false;
        }
            return true;
    }
    
    bool detectCapitalUse(string word) {
        if (check(word, 'A', 'Z') || check(word, 'a', 'z') ||word[0] >= 'A' && word[0] <= 'Z' &&
            check(word.substr(1), 'a', 'z'))
            return true;
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna