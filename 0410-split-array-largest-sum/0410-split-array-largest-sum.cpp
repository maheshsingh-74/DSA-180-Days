class Solution {
private:
    bool isValid(const vector<int>& nums, int k, long long maxSum) {
        int count = 1;
        long long currentSum = 0;

        for (int num : nums) {
            if (num > maxSum) return false;

            if (currentSum + num <= maxSum) {
                currentSum += num;
            } else {
                count++;
                currentSum = num;
            }
        }

        return count <= k;
    }

public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        if (k > n) return -1;

        long long s = 0;
        long long e = 0;

        for (int num : nums) {
            s = max(s, (long long)num); 
            e += num;                   
        }

        long long ans = e;

        while (s <= e) {
            long long mid = s + (e - s) / 2;

            if (isValid(nums, k, mid)) {
                ans = mid;
                e = mid - 1;
            } else {
                s = mid + 1; 
            }
        }

        return (int)ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna