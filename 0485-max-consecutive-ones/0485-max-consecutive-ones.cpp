class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
       int maxcnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)cnt++;
            else {
            maxcnt=max(maxcnt,cnt);
            cnt=0;
            }
             maxcnt=max(maxcnt,cnt);
        }
        return maxcnt;
    }
};