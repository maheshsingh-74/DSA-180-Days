class Solution {
public:
    bool isIsomorphic(string s, string t) {
          if (s.length() != t.length()) return false;

    unordered_map<char, char> map1; 
    unordered_map<char, char> map2; 

    for (int i = 0; i < s.length(); i++) {
        char c1 = s[i];
        char c2 = t[i];

        if (map1.find(c1) != map1.end()) {
            if (map1[c1] != c2) return false;
        } else {
            if (map2.find(c2) != map2.end()) {
                return false;
            }
            map1[c1] = c2;
            map2[c2] = c1;
        }
    }

    return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna