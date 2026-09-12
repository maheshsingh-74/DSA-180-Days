class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        //unordered_map> mp;
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        int count=0;
        for(auto &[val,idx]:mp){
            if(idx.size()==3){
                if(idx[2]-idx[1]==idx[1]-idx[0])count++;
            }
        }
        return count;
    }
};