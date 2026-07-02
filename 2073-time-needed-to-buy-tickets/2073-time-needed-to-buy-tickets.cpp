class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        queue<int> q;
        int time = 0;
        
        for (int i = 0; i < n; i++) {
            q.push(i);
        }
        
        while (!q.empty()) {
            int front_idx = q.front();
            q.pop();
            
            tickets[front_idx]--;
            time++;
            
            if (front_idx == k && tickets[k] == 0) {
                return time;
            }
          
            if (tickets[front_idx] > 0) {
                q.push(front_idx);
            }
        }
        
        return time;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna