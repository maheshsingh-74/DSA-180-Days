class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>one;
        stack<char>two;
       
        for (char c : s) {
            if (c == '#') {
                if (!one.empty()) one.pop(); 
            } else {
                one.push(c);
            }
        }
       
        for (char c : t) {
            if (c == '#') {
                if (!two.empty()) two.pop();
            } else {
                two.push(c);
            }
        }
        return one == two;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna