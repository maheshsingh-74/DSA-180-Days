class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> maxx(n);
        maxx[n - 1] = prices[n - 1];
        int largest = prices[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            maxx[i] = max(largest, prices[i]);
            if (prices[i] > largest)
                largest = prices[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = max(ans, maxx[i] - prices[i]);
        }
        return ans;
    }
};