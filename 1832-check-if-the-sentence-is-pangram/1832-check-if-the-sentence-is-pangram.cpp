class Solution {
public:
    bool checkIfPangram(string s) {
        if (s.length() < 26) return false;
      vector<int>check(26,0);
      for(auto &ch:s){
        check[ch-'a']=1;
      }
      for(int i=0;i<26;i++){
        if(check[i]==0)
        return false;
      }
      return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna