class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &nums) {
        // code here
           int n=nums.size();
        int i=0;
        int j=1;
        while(j<n){
            if(nums[i]!=nums[j]){
            i++;
            nums[i]=nums[j];
            }
            else j++;
        }
        nums.resize(i+1);
        return nums;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna