class Solution {
  public:
    int lastIndex(string s) {
        int idx=-1;
        int i=s.size()-1;
        while(i>=0){
            if(s[i]=='1'){
                idx=i;
                break;
            }
            i--;
        }
        return idx;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna