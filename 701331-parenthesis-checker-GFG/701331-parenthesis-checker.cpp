class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char>st;
        int i=0;
        int n = s.size();
        while(i<n){
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        st.push(s[i]);
            
        else {
            if(st.empty()) return false;
          else if ((s[i] == ')' && st.top() == '(') ||
                    (s[i] == '}' && st.top() == '{') ||
                    (s[i] == ']' && st.top() == '[')) 
                    st.pop();
            else 
            return false;
            
        }
        i++;
        }
       
        return st.empty();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna