class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
         int maxx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxx=max(maxx,nums[i]);
        }
        int i=0,j=0,count=0;
        long long result=0;
        while(j<nums.size()){
            if(nums[j]==maxx) count++;
       
       while(count>=k){
        result+=nums.size()-j;
       
       if(nums[i]==maxx) count--;
       i++;
       }
       j++;
    }
return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna