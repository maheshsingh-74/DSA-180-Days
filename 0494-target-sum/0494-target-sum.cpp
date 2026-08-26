class Solution {
public: int solve(vector<int>& nums,int idx,int sum,int target, unordered_map<string,int>&mp){
    if(idx==nums.size()){
        if(sum==target)return 1;
        else return 0;
    }
    string key=to_string(idx)+'_'+to_string(sum);
    if(mp.count(key))return mp[key];
    int plus=solve(nums,idx+1,sum+nums[idx],target,mp);
    int pluss=solve(nums,idx+1,sum-nums[idx],target,mp);
    return mp[key]= plus+pluss;
}
    int findTargetSumWays(vector<int>& nums, int target) {
        unordered_map<string,int>mp;
        return solve(nums,0,0,target,mp);
    }
};