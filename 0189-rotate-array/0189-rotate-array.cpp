class Solution {
public: void reverse(vector<int>& nums,int i , int j){
    
    while(i<j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
}
    void rotate(vector<int>& nums, int k) {
        if(k==0) return;
        int n= nums.size();
        k=k%n;
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna