class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefix = 1;
        int suffix = 1;
        int n = nums.size();
        int max_prod = INT_MIN;
        for (int i = 0; i < n; i++) {

            if (prefix == 0)
                prefix = 1;
            if (suffix == 0)
                suffix = 1;
            prefix = prefix * nums[i];
            suffix = suffix * nums[n - i - 1];

            max_prod = max({max_prod, suffix, prefix});
        }
        return max_prod;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna