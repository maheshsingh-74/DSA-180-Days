class Solution {
	public:int find(int stair, int n, vector<int>&dp) {
		if (stair == n)return 1;
		if (stair>n)return 0;
		if (dp[stair] == -1)
			dp[stair] = find(stair + 1, n, dp) + find(stair + 2, n, dp) + find(stair + 3, n, dp);
		
		return dp[stair];
	}
	int countWays(int n) {
		// your code here
		vector<int>dp(n+3,-1);
  return find(0,n,dp);
	}
};
