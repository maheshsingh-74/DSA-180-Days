class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
       vector<bool> isPrime(right + 1, true);
        isPrime[0] = isPrime[1] = false;
        
        for (int i = 2; i * i <= right; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= right; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        vector<int> primes;
        for (int i = left; i <= right; i++) {
            if (isPrime[i]) {
                primes.push_back(i);
            }
        }

        if (primes.size() < 2) return {-1, -1};

        int minGap = INT_MAX;
        vector<int> ans = {-1, -1};
        for (size_t i = 0; i + 1 < primes.size(); i++) {
            int gap = primes[i + 1] - primes[i];
            if (gap < minGap) {
                minGap = gap;
                ans = {primes[i], primes[i + 1]};
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna