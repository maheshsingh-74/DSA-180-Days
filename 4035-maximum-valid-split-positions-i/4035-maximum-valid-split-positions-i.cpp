class Solution {
public: int solve(vector<int>& nums, int idx){
    vector<int>arr;
    for(int i=0;i<nums.size();i++){
        if(i!=idx) arr.push_back(nums[i]);
    }
    int m= arr.size();
    vector<int>prefix(m);
    vector<int>suffix(m);
    prefix[0]=arr[0];
    suffix[m-1]=arr[m-1];
    
    for(int j=1;j<m;j++){
        prefix[j]=gcd(prefix[j-1],arr[j]);
    }
    for(int j=m-2;j>=0;j--){
        suffix[j]=gcd(suffix[j+1],arr[j]);
    }
    int count=0;
    for(int i=0;i<m-1;i++){
        if(prefix[i]==suffix[i+1])count++;
    }
    return count;
}
    int maxValidSplits(vector<int>& nums) {
        int ans=solve(nums,-1);
        if(nums.size()<2)return 0;
        for(int i=0;i<nums.size();i++){
            ans= max(ans, solve(nums,i));
        }
        return ans;
    }
};