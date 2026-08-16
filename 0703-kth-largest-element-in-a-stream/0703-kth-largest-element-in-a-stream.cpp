class KthLargest {
priority_queue<int,vector<int>, greater<int>> pq;
int K;
public:
KthLargest(int k, vector<int>& nums) {
K = k;
for(int x : nums) {
pq.push(x);
if(pq.size() > K) pq.pop();
}
}

int add(int val) {
pq.push(val);
if(pq.size() > K) pq.pop();
return pq.top();
}
};
/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna