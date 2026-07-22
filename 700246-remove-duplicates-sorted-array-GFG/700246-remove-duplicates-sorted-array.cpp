class Solution {
public:
    vector<int> removeDuplicates(vector<int> &nums) {
        if (nums.empty()) return {};
        
        vector<int> result;
        result.push_back(nums[0]);
        
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != result.back()) {
                result.push_back(nums[j]);
            }
        }
        
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna