class Solution {
public: int t[1001][1001];
int n;
int solve(vector<vector<int>>&nums,int i,int p){
    if(i>=n)return 0;
    if(p!=-1 && t[i][p]!=-1)return t[i][p];
    int take=0;
if(p==-1 || nums[i][0]>nums[p][1]){
    take= 1+solve(nums,i+1,i);
}
int skip=solve(nums,i+1,p);
if(p!=-1)
return t[i][p]=max(take,skip);
return max(take,skip);
}
    int findLongestChain(vector<vector<int>>& pairs) {
         n= pairs.size();
        memset(t,-1,sizeof(t));
        sort(begin(pairs),end(pairs));
        return solve(pairs,0,-1);
    }
};