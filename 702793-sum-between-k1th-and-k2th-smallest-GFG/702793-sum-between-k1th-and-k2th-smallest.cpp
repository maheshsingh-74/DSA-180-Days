class Solution {
	public:
	int sumBetweenK1K2(vector<int>& arr, int k1, int k2) {
		priority_queue<int>p1;
		priority_queue<int>p2;
		int n = arr.size();
		for (int i = 0; i<k1; i++) {
			p1.push(arr[i]);
		}
		for (int i = 0; i<k2; i++) {
			p2.push(arr[i]);
		}
		for (int i = k1; i<n; i++) {
			if (arr[i]<p1.top()) {
				p1.pop();
				p1.push(arr[i]);
			}
		}
		for (int i = k2; i<n; i++) {
			if (arr[i]<p2.top()) {
				p2.pop();
				p2.push(arr[i]);
			}}
			long long sum = 0;
			p2.pop();
			while (!p2.empty()) {
				sum += p2.top();
				p2.pop();
			}
			while (!p1.empty()) {
				sum -= p1.top();
				p1.pop();
			}
			return sum;
		}
	};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna