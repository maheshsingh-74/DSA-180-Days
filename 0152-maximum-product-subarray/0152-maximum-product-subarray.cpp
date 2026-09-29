class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long pre=1,suff=1;
        long long ans= LLONG_MIN;
        int n= nums.size();
        for(int i=0;i<nums.size();i++){
            if(pre==0)pre=1;
            if(suff==0)suff=1;
            pre*=nums[i];
            suff*=nums[n-i-1];
            ans=max({ans,pre,suff});
        }
        return (int)ans;
    }
};