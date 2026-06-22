class Solution {
    public:
    void sortedInsert(stack<int> &st, int x) {
  
    if (st.empty() || st.top() <= x) {
        st.push(x);
        return;
    }

    int top = st.top();
    st.pop();
    sortedInsert(st, x);
   
    st.push(top);
}


void sortStack(stack<int> &st) {
    if (st.empty()) return;
    
    // Remove top element
    int top = st.top();
    st.pop();
    
    // Recursively sort remaining stack
    sortStack(st);
    
    // Insert the removed element in sorted position
    sortedInsert(st, top);
}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna