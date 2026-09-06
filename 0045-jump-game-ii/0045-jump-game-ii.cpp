class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();

        if (n == 1) {
            return 0;
        }

        int count = 1;
        int idx = 0;
        int jump = nums[0];

        while (jump < n - 1) {

            int maxJump = jump;
            int newIdx = idx;

            for (int i = idx + 1; i <= jump && i < n; i++) {
                if (i + nums[i] > maxJump) {
                    maxJump = i + nums[i];
                    newIdx = i;
                }
            }

            jump = maxJump;
            idx = newIdx;
            count++;
        }

        return count;
    }
};