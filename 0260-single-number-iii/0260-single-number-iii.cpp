class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
           vector<int> result;
       //  int n= nums.size();
        long long xorr=0;
        for(auto &num : nums) xorr^=num;
    
    int g1=0;
    int g2=0;
    int mask=(xorr) & (-xorr);
    for(auto &num:nums ){
        if(mask & num) g1^=num;
        else g2^=num;
    }
    return {g1,g2};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna