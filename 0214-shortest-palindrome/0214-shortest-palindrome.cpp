class Solution {
public:
   void computeLPSArray(string pat, vector<int>& lps) {
    int m = pat.length();
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < m) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

string shortestPalindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    
    string temp = s + "#" + rev;
    int n = temp.length();
    vector<int> lps(n, 0);
    
    computeLPSArray(temp, lps);
    
    int len = lps[n - 1];
    string toAdd = rev.substr(0, s.length() - len);
    return toAdd + s;
}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna