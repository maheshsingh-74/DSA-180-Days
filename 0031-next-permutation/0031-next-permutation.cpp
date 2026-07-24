class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx=-1;
        int n= nums.size();
        for(int j=n-1;j>=1;j--){
            if(nums[j]>nums[j-1]) {
                idx=j-1;
                break;
            }
        }
        int swapidx=idx;
        if(idx!=-1){
      for(int j=n-1;j>=idx+1;j--){
        if(nums[j]>nums[idx]){ swapidx=j; 
      break;}
      }
    
      swap(nums[swapidx],nums[idx]);
        }
        
            reverse(begin(nums)+idx+1,end(nums));
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna