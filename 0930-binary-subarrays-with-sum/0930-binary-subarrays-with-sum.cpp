class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       
    vector<int> freq(nums.size() + 1, 0);
    freq[0] = 1;
    int sum = 0, cnt = 0;
    for (int x : nums) {
        sum += x;
        if (sum >= goal) cnt += freq[sum - goal];
        freq[sum]++;
    }
    return cnt;

    }
};