class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.length() != word2.length()) {
            return false;
        }

        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        for (char c : word1) {
            freq1[c - 'a']++;
        }

        for (char c : word2) {
            freq2[c - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if ((freq1[i] > 0 && freq2[i] > 0) ||
                (freq1[i] == 0 && freq2[i] == 0))
                continue;
            else
                return false;
        }

        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        return freq1 == freq2;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna