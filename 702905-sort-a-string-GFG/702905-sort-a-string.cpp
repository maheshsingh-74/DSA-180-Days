class Solution {
public:
    string sortString(string &s) {
        vector<int> freq(26, 0);
        
        for (char ch : s) {
            freq[ch - 'a']++;
        }
    
        string sorted_s = "";
        for (int i = 0; i < 26; i++) {
            sorted_s.append(freq[i], 'a' + i);
        }
        
        return sorted_s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna