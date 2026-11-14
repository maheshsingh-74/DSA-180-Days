class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        int count = 1;    
        int maxcnt = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i-1]) continue;        
            else if (nums[i] - nums[i-1] == 1) count++; 
            else count = 1;                             
            maxcnt = max(maxcnt, count);
        }
        return maxcnt;
    }
};