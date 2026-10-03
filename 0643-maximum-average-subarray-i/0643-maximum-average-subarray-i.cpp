class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=INT_MIN;
        int n=nums.size();
        if(k>n)return -1.0;
        double avg=0;
        int i=0;
        int x=k;
        while(x--){
         avg+=nums[i];
         i++;
        }
        int j=i-k;
        ans=max(ans,avg/k);
        while(i<n){
        avg=avg+nums[i]-nums[j];
        ans=max(ans,avg/k);
        i++;
        j++;
        }
return ans;
    }
};