class Solution {
public:
    vector<int> prevSmaller(vector<int>& arr) {
        stack<int> st;
        vector<int> ans;
        
        for (int i = 0; i < arr.size(); i++) {
            while (!st.empty() && st.top() >= arr[i]) {
                st.pop();
            }
            
            // If stack is empty, no smaller element exists on the left
            if (st.empty()) {
                ans.push_back(-1);
            } else {
                // The top element is the nearest smaller element
                ans.push_back(st.top());
            }
            
            // Push the current element to the stack
            st.push(arr[i]);
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna