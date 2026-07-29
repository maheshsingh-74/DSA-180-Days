class Solution {
  public:
    vector<string> powerSet(string &s) {
        // Code here
        vector<string>ans;
      //  sort(s.begin(),s.end());
        int n= s.length();
        int total=1<<n; // total subsets will be 2 ki power n 
        for(int i=0;i<total;i++){
            string temp="";
            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) {
                    temp += s[j];
                }
            }
        ans.push_back(temp);
    }
    
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna