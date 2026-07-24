class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        sort(s.begin(), s.end());

        int maxFreq = 0;
        char maxChar = s[0];

        int currentFreq = 0;
        char currentChar = s[0];

        // Traverse the sorted string to find the most frequent character
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == currentChar) {
                currentFreq++;
            } else {
                // Check if current block has a strictly greater frequency
                if (currentFreq > maxFreq) {
                    maxFreq = currentFreq;
                    maxChar = currentChar;
                }
                // Reset for the new character group
                currentChar = s[i];
                currentFreq = 1;
            }
        }
        if (currentFreq > maxFreq) {
            maxFreq = currentFreq;
            maxChar = currentChar;
        }
        return maxChar;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna