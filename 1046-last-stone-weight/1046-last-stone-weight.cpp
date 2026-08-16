class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> p;
        for (int i = 0; i < stones.size(); i++) {
            p.push(stones[i]);
        }
        while (p.size() > 1) {
            int curr = p.top();
            p.pop();
            curr-=p.top();
            p.pop();
            if(curr) p.push(curr);
        }
        return p.empty()?0:p.top();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna