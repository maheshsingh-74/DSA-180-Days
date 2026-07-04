class Solution {
public: bool isvowel(char ch){
ch=tolower(ch);
return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
}
    string sortVowels(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
if(isvowel(s[i])) ans.push_back(s[i]);
        }
        sort(ans.begin(),ans.end());
        int j=0;
          for(int i=0;i<s.size();i++){
            if(isvowel(s[i])){
                s[i]=ans[j];
                j++;
            }
          }
          return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna