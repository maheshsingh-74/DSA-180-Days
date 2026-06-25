class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        long long M = n * n;
        long long sum = 0;
        long long sqsum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                sum += grid[i][j];
                sqsum += grid[i][j] * grid[i][j];
            }
        }
        long long expsum = (M * (M + 1)) / 2;
        long long expsqsum = (M * (M + 1) * (2*M + 1)) / 6;
        long long sumdiff = sum - expsum;
        long long sqsumdiff = sqsum - expsqsum;
        int a = ((sqsumdiff / sumdiff) + sumdiff)/2;
        int b = ((sqsumdiff / sumdiff) - sumdiff)/2;
        return {a, b};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna