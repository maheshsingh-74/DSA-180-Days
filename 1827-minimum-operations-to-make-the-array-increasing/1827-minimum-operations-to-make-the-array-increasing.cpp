class Solution {
public:
    int minOperations(vector<int>& nums) {
     if(nums.size()==1) return 0;
     int count=0;
     int n= nums.size();
     for(int i=1;i<n;i++){
        if(nums[i]<=nums[i-1]){
int opr=1+abs(nums[i]-nums[i-1]);
count+=opr;
nums[i]=nums[i-1]+1;
        }
     }
     return count;   
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna