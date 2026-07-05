class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        long long int i = 0, j = 0, result = INT_MIN;
        int n = nums.size();
        unordered_map<int, int> mp;
        while (j < n) {
            mp[nums[j]]++;
            while (i < j && mp[nums[j]] > k) {
                mp[nums[i]]--;
                i++;
            }
            result= max(result,(j-i+1));
            j++;
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna