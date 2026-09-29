class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
       long long sum=0;
       int cnt=0;
       int n= nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
       long long int prefsum=0;
        for(int i=0;i<n-1;i++){
            prefsum+=nums[i];
            sum-=nums[i];
            if(prefsum>=sum)cnt++;
        }
        return cnt;
    }
};