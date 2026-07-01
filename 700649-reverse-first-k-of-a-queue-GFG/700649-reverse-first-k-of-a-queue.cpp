class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        stack<int>st;
        if(q.size()<k) return q;
        while(k--){
            st.push(q.front());
            q.pop();
        }
        int n=q.size();
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        while(n--){
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna