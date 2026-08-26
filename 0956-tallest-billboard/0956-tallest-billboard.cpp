class Solution {
    int t[21][10001];

public:
    int solve(vector<int>& rods, int idx, int diff) {
        if (idx == rods.size()) {
            if (diff == 0)
                return 0;
            return INT_MIN;
        }
        if (t[idx][diff + 5000] != -1)
            return t[idx][diff + 5000];
        int ntg = solve(rods, idx + 1, diff);
        int ll1 = rods[idx] + solve(rods, idx + 1, diff + rods[idx]);
        int ll2 = rods[idx] + solve(rods, idx + 1, diff - rods[idx]);
        return t[idx][diff + 5000] = max({ntg, ll1, ll2});
    }
    int tallestBillboard(vector<int>& rods) {
        int n = rods.size();
        memset(t, -1, sizeof(t));
        return solve(rods, 0, 0) / 2;
    }
};