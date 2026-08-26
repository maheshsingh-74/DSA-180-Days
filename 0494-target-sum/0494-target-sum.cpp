class Solution {
public: int solve(vector<int>& nums,int idx,int sum,int target){
    if(idx==nums.size()){
        if(sum==target)return 1;
        else return 0;
    }
    int plus=solve(nums,idx+1,sum+nums[idx],target);
    int pluss=solve(nums,idx+1,sum-nums[idx],target);
    return plus+pluss;
}
    int findTargetSumWays(vector<int>& nums, int target) {
        return solve(nums,0,0,target);
    }
};