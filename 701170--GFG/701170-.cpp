class Solution {
	public:
	bool isPowerofTwo(int n) {
		// code here
		// return n>0 && ((n & (n-1)) == 0);
		if (n == 0)
			return false;
		while (n>1) {
			if (n%2 != 0)
				return false;
			n /= 2;
		}
		return true;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna