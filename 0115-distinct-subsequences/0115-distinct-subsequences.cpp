class Solution {
public: typedef unsigned long long ull;
    int numDistinct(string s, string t) {
        int m= s.length();
        int n= t.length();
        vector<vector<ull>>dp(m+1,vector<ull>(n+1));
        for(int i=0;i<=m;i++){
            dp[i][0]=1;
        }
        for(int j=1;j<n;j++){
            dp[0][j]=0;
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]==t[j-1])dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
                else dp[i][j]=dp[i-1][j];
            }
        }
        return dp[m][n];
    }
};