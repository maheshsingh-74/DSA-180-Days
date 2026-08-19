class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          int n = nums.size();
        
        // 1. Create a vector of pairs to store {value, original_index}
        vector<pair<int, int>> indexed_nums(n);
        for (int i = 0; i < n; i++) {
            indexed_nums[i] = {nums[i], i};
        }
        
        // 2. Sort the array. It sorts by the first element of the pair (the value)
        sort(indexed_nums.begin(), indexed_nums.end());
        
        // 3. Run your Binary Search logic
        for (int i = 0; i < n - 1; i++) {
            int x = target - indexed_nums[i].first; // Target minus current value
            
            int start = i + 1;
            int end = n - 1;
            
            while (start <= end) {
                int mid = start + (end - start) / 2;
                
                if (indexed_nums[mid].first == x) {
                    // Found the partner! Return their ORIGINAL indices
                    return {indexed_nums[i].second, indexed_nums[mid].second};
                }
                else if (indexed_nums[mid].first < x) {
                    start = mid + 1;
                }
                else {
                    end = mid - 1;
                }
            }
        }
        
        return {};
    }
};