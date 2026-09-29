class Solution {
public:
    int waysToSplit(vector<int>& nums) {
        const int MOD = 1e9 + 7;
        int n = nums.size();
        vector<long long> pre(n + 1, 0);
        for (int i = 0; i < n; i++) pre[i + 1] = pre[i] + nums[i];
        long long total = pre[n], ans = 0;

        for (int i = 1; i <= n - 2; i++) {
            int lo = lower_bound(pre.begin() + i + 1, pre.begin() + n, 2 * pre[i]) - pre.begin();
            int hi = upper_bound(pre.begin() + i + 1, pre.begin() + n, (total + pre[i]) / 2) - pre.begin();
            if (hi > lo) ans += hi - lo;
        }
        return ans % MOD;
    }
};