class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> result(nums.size(), 0);
        int n = nums.size();
        int i = 0;
        int j = 1;
        for (int k = 0; k < n; k++) {
            if (nums[k] > 0) {
                result[i] = nums[k];
                i += 2;
            } else {
                result[j] = nums[k];
                j += 2;
            }
        
            }    return result;
        
    }
    };

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna