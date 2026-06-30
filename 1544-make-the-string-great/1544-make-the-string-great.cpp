class Solution {
public:
    string makeGood(string s) {
        string ans = "";
        
        for (int i = 0; i < s.size(); i++) {
           
            if (!ans.empty() && abs(ans.back() - s[i]) == 32) {
                ans.pop_back(); 
            } else {
                ans.push_back(s[i]); 
            }
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna