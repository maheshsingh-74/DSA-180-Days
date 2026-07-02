class MyStack {
private:
    queue<int> q;

public:
    MyStack() {
        // Constructor
    }
    
    // Pushes element x to the top of the stack.
    void push(int x) {
        q.push(x);
        int sz = q.size();
        
        // Rotate the queue to bring the newly added element to the front
        for (int i = 0; i < sz - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }
    
    // Removes the element on the top of the stack and returns it.
    int pop() {
        int top_element = q.front();
        q.pop();
        return top_element;
    }
    
    // Returns the element on the top of the stack.
    int top() {
        return q.front();
    }
    
    // Returns true if the stack is empty, false otherwise.
    bool empty() {
        return q.empty();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna