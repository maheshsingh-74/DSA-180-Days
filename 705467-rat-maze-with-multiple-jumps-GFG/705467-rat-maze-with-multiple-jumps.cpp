class Solution {
	public:
	bool solve(int i, int j, vector<vector<int>> & m, vector<vector<int>> &ans, vector<vector<int>> &dp) {
		int n = m[0].size();
		if (i==n-1 && j==n-1){
		ans[i][j]=1;
			return true;
		}
		
		if (i >= n || j >= n || m[i][j] == 0)
			return false;
		
		if (dp[i][j] != -1)
			return dp[i][j];
		ans[i][j] = 1;
		int steps = m[i][j];
		for (int k = 1; k <= steps; k++) {
			if (solve(i, j + k, m, ans, dp))
				return dp[i][j] = 1 ;
			if (solve(i + k, j, m, ans, dp)) return dp[i][j] = 1;
			
		}
		ans[i][j] = 0;
		return dp[i][j] = 0;
	}
	vector<vector<int>> shortestDist(vector<vector<int>> & m) {
		// code here
		int n = m[0].size();
		vector<vector<int>> dp(n,vector<int>(n, -1));
		vector<vector<int>> ans(n,vector<int>(n, 0));
		if (!solve(0, 0, m, ans, dp))
			return {{-1}};
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna