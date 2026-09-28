class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>pref(n);
        vector<int>suff(n);
        pref[0]=nums[0];
        suff[n-1]=nums[n-1];
        for(int i=1;i<nums.size();i++){
         pref[i]=pref[i-1]+nums[i];
        }
        for(int i=n-2;i>=0;i--){
            suff[i]=suff[i+1]+nums[i];

        }
      int leftsum=0;
      int rightsum=0;
      for(int i=0;i<n;i++){
        if(i==0)leftsum=0;
        if(i!=0)leftsum=pref[i-1];
        if(i==n-1)rightsum=0;
        if(i!=n-1)rightsum=suff[i+1];
        if(leftsum==rightsum)return i;
      }
      return -1;

    }
};