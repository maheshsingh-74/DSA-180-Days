class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int window = n - k;

        long long total = 0;
        for (int x : cardPoints) {
            total += x;
        }

        if (window == 0) return total;

        long long sum = 0;
        for (int i = 0; i < window; i++) {
            sum += cardPoints[i];
        }

        long long minSum = sum;

        for (int i = window; i < n; i++) {
            sum += cardPoints[i] - cardPoints[i - window];
            minSum = min(minSum, sum);
        }

        return total - minSum;
    }
};