class Solution {
  public:
    vector<string> generateBinary(int n) {
        vector<string> result;
        queue<string> q;
        
        q.push("1");
     
        while (n--) {
            string current = q.front();
            q.pop();
            result.push_back(current);
            
            q.push(current + "0");
            q.push(current + "1");
        }
        
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna