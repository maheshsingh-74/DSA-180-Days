class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    if (k <= 1) return 0;
    
    int count = 0;
    long long product = 1; 
    int i = 0;
    
    for (int j = 0; j < nums.size(); j++) {
        product *= nums[j];
      
        while (product >= k && i <= j) {
            product /= nums[i];
            i++;
        }
        count += (j - i + 1);
    }
    
    return count;
  
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna