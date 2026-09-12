class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
          unordered_map<int,vector<int>> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        int count=0;
        for(auto &[val,idx]:mp){
            int n= idx.size();
            if(n<3) continue;
            int diff=idx[1]-idx[0];
             bool valid=1;
            for(int i=2;i<n;i++){
                
                if(idx[i]-idx[i-1]!=diff){
                valid=0;
                break;
            }
            }
            if(valid==1)count++;
          }
            
        
        return count;
    }
};