class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto num:nums)mp[num]++;
        for(pair it : mp){
            if(it.second==1)return it.first;
        }
        return 0;
        
    }
};