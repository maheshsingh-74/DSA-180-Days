class Solution {
public:
    int maxProduct(int n) {
        vector<int> ans;

        long long int prod = 1;
        while (n != 0) {
            int rem = n % 10;
            ans.push_back(rem);
            n /= 10;
        }
        if (ans.size() == 1)
            return ans[0];
        else {
            sort(ans.begin(), ans.end());
            int j = ans.size() - 1;
            int i = ans.size() - 2;

            return ans[i] * ans[j];
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna