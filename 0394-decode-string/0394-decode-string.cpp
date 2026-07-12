class Solution {
public:
    string decodeString(string s) {
        stack<int> numStack;
        stack<string> strStack;
        string currentStr = "";
        int currentNum = 0;
        
        for (char ch : s) {
            if (isdigit(ch)) {
                currentNum = currentNum * 10 + (ch - '0');
            } 
            else if (ch == '[') {
                numStack.push(currentNum);
                strStack.push(currentStr);
                
                currentNum = 0;
                currentStr = "";
            } 
            else if (ch == ']') {
                int repeatTimes = numStack.top();
                numStack.pop();
                
                string decodedSegment = "";
                for (int i = 0; i < repeatTimes; i++) {
                    decodedSegment += currentStr;
                }
                
                currentStr = strStack.top() + decodedSegment;
                strStack.pop();
            } 
            else {
                currentStr += ch;
            }
        }
        
        return currentStr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna