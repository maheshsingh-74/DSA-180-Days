class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<int, int> mp; 
        int prefix_sum = 0;
        int max_len = 0;
        int n = arr.size();
        
        for (int i = 0; i < n; i++) {
            prefix_sum += arr[i];
             if (prefix_sum == k) {
                max_len = i + 1;
            }
            
            if (mp.find(prefix_sum - k) != mp.end()) {
                max_len = max(max_len, i - mp[prefix_sum - k]);
            }
            
            
             if(mp.find(prefix_sum) == mp.end()) {
                mp[prefix_sum] = i;
            }
        }
        
        return max_len;
    }
};
   

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna