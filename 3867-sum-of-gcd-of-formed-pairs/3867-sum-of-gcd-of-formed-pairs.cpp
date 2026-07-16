class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        std::vector<int> prefixGcd(n);
        
        int mx = 0;
        for (int i = 0; i < n; ++i) {
            mx = std::max(mx, nums[i]);
            prefixGcd[i] = std::gcd(nums[i], mx);
        }
        
        std::sort(prefixGcd.begin(), prefixGcd.end());
        
        long long totalGcdSum = 0;
        int left = 0;
        int right = n - 1;
        
        while (left < right) {
            totalGcdSum += std::gcd(prefixGcd[left], prefixGcd[right]);
            left++;
            right--;
        }
        
        return totalGcdSum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna