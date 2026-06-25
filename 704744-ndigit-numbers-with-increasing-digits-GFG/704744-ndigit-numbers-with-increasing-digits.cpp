class Solution {
public:
    void generateNumbers(int n, int currentNum, int lastDigit, vector<int>& result) {
        // Base case: if the number has reached n digits, add it to the result
        if (n == 0) {
            result.push_back(currentNum);
            return;
        }

        // The next digit must be strictly greater than the last digit and <= 9
        for (int i = lastDigit + 1; i <= 9; i++) {
            generateNumbers(n - 1, currentNum * 10 + i, i, result);
        }
    }

    vector<int> increasingNumbers(int n) {
        vector<int> result;

        // Special case: single digit numbers include 0
        if (n == 1) {
            return {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        }

        // If n > 9, no such number can be formed with strictly increasing digits
        if (n > 9) {
            return result;
        }

        // For n > 1, the first digit can be anything from 1 to 9
        for (int i = 1; i <= 9; i++) {
            generateNumbers(n - 1, i, i, result);
        }

        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna