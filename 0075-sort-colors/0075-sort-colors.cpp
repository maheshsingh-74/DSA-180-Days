class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0, count1 = 0, count2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                count0++;
            if (nums[i] == 1)
                count1++;

            if (nums[i] == 2)
                count2++;
        }
        for (int i=0;i<count0;i++){
            nums[i]=0;
        }
          for (int i=count0;i<count0+count1;i++){
            nums[i]=1;
        }
          for (int i=count0+count1;i<nums.size();i++){
            nums[i]=2;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna