class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 0)
            return -1;

        int low = 0;
        int high = n - 1;
        while (low < high) {
            while(low<high && nums[low]==nums[high]) low++;
            while(low<high && nums[high]==nums[high-1]) high--;
            int mid = low + (high - low) / 2;
            if (nums[mid] > nums[high]) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        int pivot = low;

        low = 0;
        high = n - 1;
        if (target >= nums[pivot] && target <= nums[high]) {
            low = pivot;
        } else {
            high = pivot - 1;
        }

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                return true;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return false;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna