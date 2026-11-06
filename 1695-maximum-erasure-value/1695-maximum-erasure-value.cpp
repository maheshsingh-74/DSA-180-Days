class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> st;
        int l = 0;
        int current_sum = 0;
        int max_score = 0;
        
        for (int r = 0; r < nums.size(); r++) {
            while (st.count(nums[r])) {
                current_sum -= nums[l];
                st.erase(nums[l]);
                l++;
            }
            
            st.insert(nums[r]);
            current_sum += nums[r];
            
            max_score = max(max_score, current_sum);
        }
        
        return max_score;
    }
};