class Solution {
public:typedef unsigned long long ull;
    int dp[1001][1001];
    ull solve(string& s, string& t, int m, int n) {
        if (n == 0)
            return dp[m][n]= 1;
        if (m == 0 && n != 0)
            return 0;
            if(dp[m][n]!=-1)return dp[m][n];
        int take = 0;
        int skip = 0;
        if (s[m - 1] == t[n - 1])
            take = solve(s, t, m - 1, n - 1);
        
            skip = solve(s, t, m - 1, n);
        return dp[m][n]= take + skip;
    }
    int numDistinct(string s, string t) {
        if (t.length() > s.length())
            return 0;
            memset(dp,-1,sizeof(dp));
        int m = s.length();
        int n = t.length();
        return solve(s, t, m, n);
    }
};