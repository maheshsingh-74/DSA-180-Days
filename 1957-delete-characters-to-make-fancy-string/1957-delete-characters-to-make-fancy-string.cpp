class Solution {
public:
    string makeFancyString(string s) {
      string ans = "";
        
        for (char ch : s) {
            int n = ans.length();
            // If the last two characters in `ans` are equal to `ch`, skip it
            if (n >= 2 && ans[n - 1] == ch && ans[n - 2] == ch) {
                continue;
            }
            ans.push_back(ch);
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna