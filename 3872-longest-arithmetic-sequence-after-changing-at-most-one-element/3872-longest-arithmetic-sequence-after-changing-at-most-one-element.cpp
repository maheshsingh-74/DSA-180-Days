class Solution {
public:
    int longestArithmetic(vector<int>& nums) {
        int n = nums.size();

        vector<int> L(n, 1), R(n, 1);

        L[0] = 1;
        L[1] = 2;
        for (int i = 2; i < n; i++) {
            long long d1 = 1LL * nums[i] - nums[i - 1];
            long long d2 = 1LL * nums[i - 1] - nums[i - 2];
            if (d1 == d2) L[i] = L[i - 1] + 1;
            else L[i] = 2;
        }

        R[n - 1] = 1;
        R[n - 2] = 2;
        for (int i = n - 3; i >= 0; i--) {
            long long d1 = 1LL * nums[i + 1] - nums[i];
            long long d2 = 1LL * nums[i + 2] - nums[i + 1];
            if (d1 == d2) R[i] = R[i + 1] + 1;
            else R[i] = 2;
        }

        int ans = 2;

        for (int i = 0; i < n; i++) {
            if (i > 0) ans = max(ans, L[i - 1] + 1);
            if (i + 1 < n) ans = max(ans, R[i + 1] + 1);

            if (i > 0 && i + 1 < n) {
                long long gap = 1LL * nums[i + 1] - nums[i - 1];
                if (gap % 2 == 0) {
                    long long d = gap / 2;

                    int leftLen = 1;
                    if (i >= 2 && 1LL * nums[i - 1] - nums[i - 2] == d) {
                        leftLen = L[i - 1];
                    }

                    int rightLen = 1;
                    if (i + 2 < n && 1LL * nums[i + 2] - nums[i + 1] == d) {
                        rightLen = R[i + 1];
                    }

                    ans = max(ans, leftLen + 1 + rightLen);
                }
            }
        }

        return min(ans, n);
    }
};