class Solution {
public: int solve(int idx,bool buy,vector<int>& prices,vector<vector<int>>&dp){
    if(idx==prices.size())return 0;
    int profit=0;
    if(dp[idx][buy]!=-1) return dp[idx][buy];
    else{
    if(buy){
    int buykaro=-prices[idx]+solve(idx+1,0,prices,dp);
    int skipkaro=0+solve(idx+1,1,prices,dp);
    profit=max(buykaro,skipkaro);
    }
    else {
        int sellkaro=prices[idx]+solve(idx+1,1,prices,dp);
        int skipkaro=solve(idx+1,0,prices,dp);
        profit=max(sellkaro,skipkaro);
    }
    }
    return dp[idx][buy]=profit;
}
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return solve(0,1,prices,dp);
    }
};