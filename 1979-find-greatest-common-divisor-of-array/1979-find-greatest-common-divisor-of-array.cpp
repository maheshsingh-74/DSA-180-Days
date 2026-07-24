class Solution {
public:
    int findGCD(vector<int>& nums) {
    
      int mn = 1001 , mx=0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]<mn) mn = nums[i];
            if(nums[i] > mx) mx = nums[i];
        }

        return gcd(mn,mx);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna