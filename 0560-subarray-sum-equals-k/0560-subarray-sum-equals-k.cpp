class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        int prefix_sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            prefix_sum += nums[i];

            if (mp.find(prefix_sum-k) != mp.end()) {
                count += mp[prefix_sum-k];
            }
            mp[prefix_sum]++;
            }    return count;
        
    }
};