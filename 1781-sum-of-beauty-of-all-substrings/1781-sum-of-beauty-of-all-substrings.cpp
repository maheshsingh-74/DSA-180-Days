class Solution {
public:
    int beautySum(string s) {
           int n = s.length();
        int totalBeauty = 0;

        for (int i = 0; i < n; ++i) {
            int freq[26] = {0};
            int maxFreq = 0;

            for (int j = i; j < n; ++j) {
                int idx = s[j] - 'a';
                freq[idx]++;
                maxFreq = max(maxFreq, freq[idx]);

                int minFreq = INT_MAX;
                for (int k = 0; k < 26; ++k) {
                    if (freq[k] > 0) {
                        minFreq = min(minFreq, freq[k]);
                    }
                }

                totalBeauty += (maxFreq - minFreq);
            }
        }

        return totalBeauty;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna