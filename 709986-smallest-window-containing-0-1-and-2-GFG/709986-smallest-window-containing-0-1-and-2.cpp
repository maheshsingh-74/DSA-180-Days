class Solution {
  public:
    int smallestSubstring(string &s) {
        // code here
        int zero=-1;
        int one=-1;
        int two=-1;
        int len=INT_MAX;
        int start;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                zero=i;
            }
           else if(s[i]=='1'){
                one=i;
            }
           else if(s[i]=='2'){
                two=i;
            }
            if(zero!=-1 && one!=-1 && two!=-1){
             start=min({one,two,zero});   
            
            len=min(len,i-start+1);
            }
        }
        return (len == INT_MAX) ? -1 :len;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna