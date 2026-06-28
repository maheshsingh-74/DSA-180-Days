class Solution {
  public:
    bool metaStrings(string &s1, string &s2) {
        if (s1.size() != s2.size()) return false;
        
        int first = -1, second = -1;
        int count = 0;
        
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i]) {
                count++;
                
                if (count > 2) return false;
                
                if (first == -1) {
                    first = i;
                } else {
                    second = i;
                }
            }
        }
        
        // Must have exactly 2 mismatches, and swapping them must make the strings equal
        return (count == 2 && s1[first] == s2[second] && s1[second] == s2[first]);
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna