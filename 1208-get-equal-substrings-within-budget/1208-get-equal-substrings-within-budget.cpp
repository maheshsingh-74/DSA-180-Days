class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.length();
        int left = 0;
        int current_cost = 0;
        int max_length = 0;
        
        for (int right = 0; right < n; ++right) {
            // Add the cost of the current character pair
            current_cost += abs(s[right] - t[right]);
            
            // If the cost exceeds budget, shrink the window from the left
            while (current_cost > maxCost) {
                current_cost -= abs(s[left] - t[left]);
                left++;
            }
            
            // Track the maximum window size achieved
            max_length = max(max_length, right - left + 1);
        }
        
        return max_length;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna