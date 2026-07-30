class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
           vector<int> result;
         int n= nums.size();
         sort(nums.begin(),nums.end());
         int num1,num2;
         for(int i=0;i<n-1;i++){
             if(nums[i+1]!=nums[i]){
                 result.push_back(nums[i]);
             }    else{
                     i++;
                 }
             
         }
         if(result.size()<2)result.push_back(nums[n-1]);
         return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna