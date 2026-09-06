class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxidx=0;
        for(int i=0;i<nums.size();i++){
         if (i > maxidx) return 0;
            maxidx=max(maxidx,i+nums[i]);
            
        }
        return 1;
    }
};