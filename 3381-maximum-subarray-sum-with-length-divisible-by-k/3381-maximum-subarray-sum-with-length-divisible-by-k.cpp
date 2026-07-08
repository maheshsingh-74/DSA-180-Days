#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long max_sum = LLONG_MIN;
        
        // min_prefix[r] stores the minimum prefix sum encountered so far 
        // at an index i such that i % k == r.
        vector<long long> min_prefix(k, LLONG_MAX);
        
        // Base case: prefix sum before adding any element is 0 at index 0.
        // 0 % k == 0
        min_prefix[0] = 0;
        
        long long current_prefix = 0;
        
        for (int j = 0; j < n; ++j) {
            current_prefix += nums[j];
            int r = (j + 1) % k;
            
            // If we have seen a prefix sum with the same remainder before,
            // we can potentially form a valid subarray.
            if (min_prefix[r] != LLONG_MAX) {
                max_sum = max(max_sum, current_prefix - min_prefix[r]);
            }
            
            // Update the minimum prefix sum for this remainder group
            min_prefix[r] = min(min_prefix[r], current_prefix);
        }
        
        return max_sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna