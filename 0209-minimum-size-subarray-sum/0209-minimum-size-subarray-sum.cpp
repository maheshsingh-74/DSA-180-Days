class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res = INT_MAX;
        int x = 0;
        long long sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (sum >= target) {
                while (sum >= target) {
                    res = min(res, i - x + 1);

                    sum -= nums[x];
                    x++;
                }
            }
        }
        if(res==INT_MAX)return 0;
        return res;
    }
};