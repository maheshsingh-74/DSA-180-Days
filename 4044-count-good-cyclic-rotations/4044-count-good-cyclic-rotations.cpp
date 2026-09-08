class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
     long long n= nums.size();
     long long sum=accumulate(begin(nums),end(nums),0LL);
     long long f=0;
     for(int i=0;i<n/2;i++){
        f+=nums[i];
        }   int ans=0;
     
        for(int i=0;i<n;i++){
            if(2*f>sum)ans++;
            f-=nums[i];
            f+=nums[((n/2)+i)%n];
        
     }  
     return ans; 
    }
};