class Solution {
public:
    long long pickGifts(vector<int>& g, int k) {
        priority_queue<int>p;
       // k=k%g.size();
        for(int i=0;i<g.size();i++){
            p.push(g[i]);

        }
        long long ans=0;
        while(k && !p.empty()){
int sq=sqrt(p.top());
p.pop();
p.push(sq);
k--;
        }
        while(!p.empty()){
            ans+=p.top();
            p.pop();
        }
return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna