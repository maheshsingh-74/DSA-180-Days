class Solution {
public:
    int minOperations(vector<int>& nums) {
        int operations = 0;
        int prev = nums[0]; 
        
        for (size_t i = 1; i < nums.size(); ++i) {
            if (nums[i] <= prev) {
                operations += (prev + 1 - nums[i]);
                prev = prev + 1;
            } else {
                prev = nums[i];
            }
        }
        
        return operations;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna