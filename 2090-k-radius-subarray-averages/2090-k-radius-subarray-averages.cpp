
class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n, -1);

        if (2 * k + 1 > n) return ans;

        long long sum = 0;
        int window = 2 * k + 1;

        for (int i = 0; i < window; i++) {
            sum += nums[i];
        }

        ans[k] = sum / window;

        for (int i = window; i < n; i++) {
            sum += nums[i];
            sum -= nums[i - window];

            ans[i - k] = sum / window;
        }

        return ans;
    }
};
