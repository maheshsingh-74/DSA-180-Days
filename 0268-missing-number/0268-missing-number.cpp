class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(begin(nums),end(nums));
        for(int i=0;i<nums.size();i++){
            if((nums[i]^i)!=0) return i;
        }
       return nums.size(); 
    }
};