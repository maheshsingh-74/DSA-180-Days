class Solution {
public:
    int nextGreaterElement(int n) {
        vector<int>nums;
        while(n){
            nums.push_back(n%10);
            n/=10;
        }
        reverse(nums.begin(),nums.end());
           int sz = nums.size();
        int i = sz - 2;
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }
        if (i < 0) {
            return -1;
        }

       
        int j = sz - 1;
        while (nums[j] <= nums[i]) {
            j--;
        }

        // Swap the two digits
        swap(nums[i], nums[j]);

        // Reverse the suffix to get the smallest greater number
        reverse(nums.begin() + i + 1, nums.end());

        // Convert digits back to a number and check overflow
        long long ans = 0;

        for (int digit : nums) {
            ans = ans * 10 + digit;

            if (ans > INT_MAX) {
                return -1;
            }
        }

        return static_cast<int>(ans);

    }
};