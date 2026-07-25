class Solution {
  public:
    string reverseWords(string &s) {
      int n=s.size();
        string ans="";
        reverse(s.begin(),s.end());
        for (int i=0;i<n;i++){
            
            string word="";
            while(i<n && s[i] !='.'){
                word+=s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            if(word.length()>0)
            ans+="."+word;
        }
        return ans.substr(1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna