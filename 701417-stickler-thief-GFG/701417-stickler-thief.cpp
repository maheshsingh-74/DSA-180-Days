class Solution {
  public:   vector<int>dp;
    int f(vector<int>& nums,int i){
        if(i>=nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        else return dp[i]= max(nums[i]+f(nums,i+2),f(nums,i+1));
    }
public: 
     int findMaxSum(vector<int>& nums) {
        dp.assign(nums.size(),-1);
        return f(nums,0);
   
      
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna