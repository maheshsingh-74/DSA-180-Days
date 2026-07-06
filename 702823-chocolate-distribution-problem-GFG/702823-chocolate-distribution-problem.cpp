class Solution {
public:
    int findMinDiff(vector<int>& a, int m) {
        int n = a.size();
        
        if (m == 0 || n == 0) return 0;
        
        sort(a.begin(), a.end());
        
        if (n < m) return -1; 
        
        int min_diff = INT_MAX;
        
        for (int i = 0; i + m - 1 < n; i++) {
            int diff = a[i + m - 1] - a[i];
            if (diff < min_diff) {
                min_diff = diff;
            }
        }
        
        return min_diff;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna