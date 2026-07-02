class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0;
        int r=1;
        while(r<nums.size()){
            if(nums[l]!=nums[r]){
                break;
            }
            else{
                l=r+1;
                r+=2;
            }
        }
    return nums[l];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna