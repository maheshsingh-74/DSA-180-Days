class Solution {
public:
    int numSubseq(vector<int>& nums, int t) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int m= 1000000007;
        vector<int>p(n);
        p[0]=1;
        int ans=0;
        for(int i=1;i<n;i++){
         p[i]=2*p[i-1]%m;
        }
       int l=0;
       int r=n-1;
       while(l<=r){
        if(nums[l]+nums[r]<=t){
            ans=ans%m+p[r-l]%m;
            l++;
        }
        else r--;
       }
        return ans;
    }
};