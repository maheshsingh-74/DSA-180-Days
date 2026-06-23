class MinStack {
public:
stack<long long int>st;
long long int min_val;
    MinStack() {
        
    }
    
    void push(int val) {
    if (st.empty()) {
            st.push(val);
            min_val = val;
        } else {
            if (val >= min_val) {
                st.push(val);
            } else {
                // Store 2*val - min_val to encode the previous min
                st.push(2LL * val - min_val);
                min_val = val;
            }
        }
    }
    
    void pop() {
         if (st.empty()) return;
        
        long long t = st.top();
        st.pop();

        if (t < min_val) {
            min_val = 2LL * min_val - t;
        }
    }
    
    int top() {
       if (st.empty()) return -1;
        
        long long t = st.top();
        
        if (t < min_val) {
            return (int)min_val;
        }
        return (int)t;
        
    }
    
    int getMin() {
      return (int)min_val; 
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna