class Solution {
  public:
    // Function to count the number of subarrays with a sum that is divisible by K
    int subCount(vector<int>& nums, int k) {
           int n = nums.size();
        long long sum = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        int result = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
           int rem = sum % k;
            if (rem < 0)
                rem += k;
        
        if (mp.find(rem) != mp.end())
            result += mp[rem];
        mp[rem]++;
        }
        return result;//  
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna