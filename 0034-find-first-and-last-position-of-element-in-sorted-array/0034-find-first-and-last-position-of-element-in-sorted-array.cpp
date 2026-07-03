class Solution {
public:
int findleftmost(vector<int>& nums, int target){
    int l=0;
    int r= nums.size()-1;
    int leftmost=-1;
    while(l<=r){
        int mid= l+(r-l)/2;
        if(nums[mid]==target) {
            leftmost=mid;
            r=mid-1;
        }
        else if (nums[mid]<target) l=mid+1;
        else r=mid-1;
    }
    return leftmost;
}
int findrightmost(vector<int>& nums, int target){
    int l=0;
    int r= nums.size()-1;
    int rightmost=-1;
    while(l<=r){
        int mid= l+(r-l)/2;
        if(nums[mid]==target) {
            rightmost=mid;
            l=mid+1;
        }
        else if (nums[mid]<target) l=mid+1;
        else r=mid-1;
    }
    return rightmost;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n= nums.size();
     int leftmost=findleftmost(nums, target);
     int rightmost= findrightmost(nums, target);
     return {leftmost, rightmost};   
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna