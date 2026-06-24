class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        if (n <= 1)
            return 0;
       // int count = 0;
        vector<int> prime(n + 1, 1);
        // prime[0]=prime[1]=0;
        for (int i = 2; i < n; i++) {
            if (prime[i])
                count++;
            for (int j = i * 2; j < n; j += i) {
                prime[j] = 0;
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna