class Solution {
public:
    int findMin(vector<int>& nums) {
       int n= nums.size();
       ios_base::sync_with_stdio(false);
        cin.tie(NULL);
       int l=0,h=n-1;
       while(l<h){
        int mid=l+(h-l)/2;
        if(nums[mid]>nums[h])
        l=mid+1;
        else h=mid;
       }
       return nums[l];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna