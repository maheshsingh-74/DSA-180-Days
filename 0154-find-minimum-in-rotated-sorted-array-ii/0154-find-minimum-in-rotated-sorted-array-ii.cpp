class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        int resultidx = 0;
        
        while (l <=r) {
            if (l<r && nums[l] == nums[l+1]) { l++; continue; }
            if (l<r && nums[r] == nums[r-1]) { r--; continue; }
            
            int mid = l + (r - l) / 2;
            if(nums[mid]<nums[resultidx]) resultidx=mid;
            if (nums[mid] > nums[r]) {
                l = mid + 1;
            } else  {
                r = mid-1;
              
            } 
            
        }
        
        return nums[resultidx];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna