class Solution {
  public:
    string removeDuplicates(string& s) {
        // code here.
        string ans="";
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]) continue;
            else {
                ans.push_back(s[i]);
            }
        }
        ans.push_back(s[s.size()-1]);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna