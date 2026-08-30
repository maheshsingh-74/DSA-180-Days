class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 1;

        pair<int,int> minn = {nums[0], 0}; // {value, index}
        pair<int,int> maxx = {nums[0], 0};

        for (int i = 1; i < n; i++) {
            if (nums[i] < minn.first) {
                minn = {nums[i], i};
            }
            if (nums[i] > maxx.first) {
                maxx = {nums[i], i};
            }
        }

        int left = min(minn.second, maxx.second);
        int right = max(minn.second, maxx.second);

        // Option 1: remove both from the front
        int op1 = right + 1;
        // Option 2: remove both from the back
        int op2 = n - left;
        // Option 3: remove the left one from front, right one from back
        int op3 = (left + 1) + (n - right);

        return min({op1, op2, op3});
    }
};