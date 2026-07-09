class Solution {
	public:
	int countSubarray(vector<int>& arr) {
		// code here
		int n = arr.size();
		long long sum = 0;
		int ans = 0;
		unordered_map<int, int>mp;
		mp[0] = 1;
		for (int i = 0; i<n; i++) {
			if (arr[i] == 0)
				sum += -1;
			if (arr[i] == 1)
				sum += 1;
			if (mp.find(sum) != mp.end()) {
				ans+=mp[sum];
			}
		
				mp[sum]++;
		}
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna