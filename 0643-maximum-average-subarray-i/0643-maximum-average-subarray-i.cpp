class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double avg = INT_MIN;
        int i = 0;
        long long sum = 0;
        while (i < k) {
            sum += nums[i];
            i++;
        }
        avg= (double)sum/k;
        int x = 0;
        while (i < n) {
            sum += nums[i];
            sum -= nums[x];

            avg = max(avg, (double)sum / k);
            i++;
            x++;
        }
        return avg;
    }
};