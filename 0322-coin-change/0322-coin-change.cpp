class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        // Initialize DP array with a value larger than any possible answer
        vector<int> dp(amount + 1, amount + 1);
        
        // Base case: 0 amount requires 0 coins
        dp[0] = 0;

        for (int i = 1; i <= amount; i++) {
            for (int coin : coins) {
                if (i - coin >= 0) {
                    dp[i] = min(dp[i], 1 + dp[i - coin]);
                }
            }
        }

        return dp[amount] > amount ? -1 : dp[amount];
    }
};