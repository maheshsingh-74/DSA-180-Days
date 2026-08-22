class Solution {
public: int find(int n,vector<int>&dp){
    if(dp[n]!=-1) return dp[n];
    else return find(n-1,dp)+find(n-2,dp);
}
    int fib(int n) {
        if (n == 0) return 0;
        
        vector<int>dp(n+1,-1);
        dp[0]=0;
        dp[1]=1;
        return find(n,dp);
    }
};