class Solution {
public:
    vector<int> findTwoElement(vector<int>& arr) {
        long long n = arr.size();
        
        // Find expected sums
        long long expected_sum = (n * (n + 1)) / 2;
        long long expected_sq_sum = (n * (n + 1) * (2 * n + 1)) / 6;
        
        // Find actual sums from the array
        long long actual_sum = 0;
        long long actual_sq_sum = 0;
        
        for (int i = 0; i < n; i++) {
            actual_sum += arr[i];
            actual_sq_sum += (long long)arr[i] * arr[i];
        }
        
        // Eq 1: Repeating - Missing
        long long diff_sum = actual_sum - expected_sum; 
        
        // Eq 2: Repeating^2 - Missing^2
        long long diff_sq_sum = actual_sq_sum - expected_sq_sum; 
        
        // Since X^2 - Y^2 = (X - Y)(X + Y)
        // Eq 3: Repeating + Missing
        long long sum_xy = diff_sq_sum / diff_sum;
        
        // Solve the linear equations
        int repeating = (diff_sum + sum_xy) / 2;
        int missing = sum_xy - repeating;
        
        return {repeating, missing};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna