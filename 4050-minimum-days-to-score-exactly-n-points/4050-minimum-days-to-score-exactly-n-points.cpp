class Solution {
public:
    int minDays(int n) {
        vector<int>dp(n+1, INT_MAX);
        dp[0]=0;
        for(int s=1;s<=n;s++){
            for(int k=1;k*(k+1)/2<=s;k++){
                int t= k*(k+1)/2;
                if(dp[s-t]==INT_MAX)continue;
                int cost=dp[s-t]+k+(s-t>0?1:0);
                dp[s]=min(dp[s],cost);
            }
        }
    return dp[n];
    }
};