class Solution {
	public:
	vector<int> prefixAvg(vector<int> &arr) {
		// code here
		vector<int>ans;
		int arrr = arr[0];
		for (int i = 1; i <= arr.size(); i++) {
			ans.push_back(arrr/i);
			arrr += arr[i];
		}
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna