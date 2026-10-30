class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>res;
        for( int num:nums)mp[num]++;
        int cnt=0;
        for(pair it : mp){
            if(it.second==1){res.push_back(it.first);
            cnt++;
            }
            if(cnt==2)break;
        }
        return res;
    }
};