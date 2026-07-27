class Solution {
public:
    string shortestPalindrome(string s) {
        string rev= s;
        reverse(rev.begin(),rev.end());
        for(int i=0;i<s.length();i++){
            if(!memcmp(s.c_str(),rev.c_str()+i,s.length()-i))return rev.substr(0,i)+s;
        }
        return rev+s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna