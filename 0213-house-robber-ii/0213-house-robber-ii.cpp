class Solution {
public:
    vector<int> dp;

    int f(vector<int>& nums, int li, int i) {
        if (i > li)
            return 0; 
        if (dp[i] != -1)
            return dp[i];

        return dp[i] = max(nums[i] + f(nums, li, i + 2), f(nums, li, i + 1));
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return nums[0];

        dp.assign(n, -1);
        int case1 = f(nums, n - 2, 0);
        dp.clear();
        dp.assign(n, -1);
        int case2 = f(nums, n - 1, 1);

        return max(case1, case2);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna