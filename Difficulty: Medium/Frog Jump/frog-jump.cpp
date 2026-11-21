class Solution {
public:
    int n;
    vector<int> dp;

    int helper(int idx, vector<int>& height) {
        if (idx == n - 1) return 0;          // already on the last stair
        if (dp[idx] != -1) return dp[idx];

        int one = abs(height[idx] - height[idx + 1]) + helper(idx + 1, height);
        int two = INT_MAX;
        if (idx + 2 < n)
            two = abs(height[idx] - height[idx + 2]) + helper(idx + 2, height);

        return dp[idx] = min(one, two);
    }

    int minCost(vector<int>& height) {
        n = height.size();
        dp.assign(n, -1);
        return helper(0, height);
    }
};