class Solution {
  public:
    void reverseStack(stack<int> &st) {
        // code here
        stack<int>s;
        stack<int>p;
        while(!st.empty()){
            s.push(st.top());
            st.pop();
        }
          while(!s.empty()){
            p.push(s.top());
            s.pop();
          }
            while(!p.empty()){
            st.push(p.top());
            p.pop();
    }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna