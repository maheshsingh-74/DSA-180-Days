class MinStack {
public:
stack<pair<int, int>>s;

    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()) s.push({val, val});
        else
        s.push({val, min(val,s.top().second)});
    }
    
    void pop() {
       s.pop(); 
    }
    
    int top() {
        return s.top().first;
        
    }
    
    int getMin() {
      return s.top().second;  
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