class Solution {
	public:
	vector<int> reducePairs(vector<int>& arr) {
		vector<int> st; // Used as a stack
		
		for (int num : arr) {
			st.push_back(num);
			
			while (st.size() >= 2) {
				int top = st.back();
				int secondTop = st[st.size() - 2];
				
				if ((long long)top * secondTop < 0) {
					if (abs(top) == abs(secondTop)) {
						st.pop_back();
						st.pop_back();
					} else {
						
						int winner = (abs(top) > abs(secondTop)) ? top : secondTop;
						st.pop_back();
						st.pop_back();
						st.push_back(winner);
					}
				} else {
					break;
				}
			}
		}
		
		return st;
	}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna