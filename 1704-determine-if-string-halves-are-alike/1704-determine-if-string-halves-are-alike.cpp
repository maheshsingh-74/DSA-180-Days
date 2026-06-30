class Solution {
public:
    bool isvowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }

    bool halvesAreAlike(string s) {
        int count1 = 0, count2 = 0;
        int n = s.size();
        
        for (int i = 0; i < n / 2; i++) {
            if (isvowel(s[i])) count1++;        
            if (isvowel(s[i + n / 2])) count2++; 
        }
        
        return count1 == count2;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna