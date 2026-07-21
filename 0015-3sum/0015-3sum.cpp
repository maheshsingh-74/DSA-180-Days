class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        
        sort(nums.begin(), nums.end());

        for (int k = 0; k < n - 2; ++k) {
            if (k > 0 && nums[k] == nums[k - 1]) continue;

            if (nums[k] > 0) break;

            int target = -nums[k];
            int i = k + 1;
            int j = n - 1;

            while (i < j) {
                int sum = nums[i] + nums[j];

                if (sum < target) {
                    i++;
                } else if (sum > target) {
                    j--;
                } else {
                    result.push_back({nums[k], nums[i], nums[j]});

                    while (i < j && nums[i] == nums[i + 1]) i++;
                    while (i < j && nums[j] == nums[j - 1]) j--;

                    i++;
                    j--;
                }
            }
        }

        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna