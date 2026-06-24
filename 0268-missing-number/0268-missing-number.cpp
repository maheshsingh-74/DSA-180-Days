class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n=nums.size();
       int sum=accumulate(nums.begin(),nums.end(),0);
       return (n*(n+1)/2)-sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna