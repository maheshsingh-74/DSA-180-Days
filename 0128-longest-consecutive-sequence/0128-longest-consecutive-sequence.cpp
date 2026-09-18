class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     int n= nums.size();
     if(n==0)return 0;  
     int ans=0;
     unordered_set<int>st(nums.begin(),nums.end());
     for(int num:st){
        if(st.contains(num-1)) continue;
        int curr=1;
        int val=num;
        while(st.contains(val+1)){
            val++;
            curr++;
        }
        ans=max(ans,curr);

     } 
     return ans;
    }
};