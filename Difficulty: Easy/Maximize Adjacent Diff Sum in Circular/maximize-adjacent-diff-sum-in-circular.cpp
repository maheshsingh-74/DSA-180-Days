class Solution {
	public:
	long long maxSum(vector<int>& a) {
		// code here
		int n=a.size();
		sort(a.begin(), a.end());
		
		vector<int>b;
		int i = 0, j = n - 1;
		while (i <= j) {
			b.push_back(a[i++]);
			if (i <= j)
				b.push_back(a[j--]);
		}
		
		long long ans = 0;
		for (int k = 0; k < n - 1; k++) {
			ans += abs(b[k] - b[k + 1]);
		}
		ans += abs(b[n - 1] - b[0]);
		return ans;
	}
};
