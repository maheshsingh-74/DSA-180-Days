class Solution {
  public:
    vector<int> singleNum(vector<int>& nums) {
        // Code here.
         vector<int> result;
         int n= nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
        mp[nums[i]]++;
    }
    
    for(auto &num:nums){
        if(mp[num]==1){
            result.push_back(num);
        }
    }
        sort(result.begin(),result.end());
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna