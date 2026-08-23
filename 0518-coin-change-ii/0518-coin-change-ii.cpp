class Solution {
public:
    int solve(int n, int amount, vector<int>& coins, vector<vector<int>>& dp) {
        if (amount == 0)
            return 1;
        if (amount < 0 || n >= coins.size())
            return 0;

        if (dp[n][amount] != -1)
            return dp[n][amount];

        int take = solve(n, amount - coins[n], coins, dp);

        int skip = solve(n+1, amount, coins, dp);

        dp[n][amount] = take + skip;

        return dp[n][amount];
    }

    int change(int amount, vector<int>& coins) {
        vector < vector<int>> dp(coins.size(), vector<int>(amount + 1, -1));

        return solve(0, amount, coins, dp);
    }
};