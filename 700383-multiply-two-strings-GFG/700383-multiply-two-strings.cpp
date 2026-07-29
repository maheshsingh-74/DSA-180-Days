class Solution {
	public:
	string multiplyStrings(string &num1, string &num2) {
		// code here
		bool neg1 = (num1[0] == '-');
        bool neg2 = (num2[0] == '-');
        bool isNegative = neg1 ^ neg2; 
        
        int start1 = neg1 ? 1 : 0;
        int start2 = neg2 ? 1 : 0;
		if (num1 == "0" || num2 == "0")
			return "0";
		
		int n1 = num1.size();
		int n2 = num2.size();
		vector<int>rem(n1 + n2, 0);
		for (int i = n1 - 1; i >= start1; i--) {
			for (int j = n2 - 1; j >= start2; j--) {
				int mul = (num1[i]-'0')*(num2[j]-'0');
				int sum = mul + rem[i + j+1];
				rem[i + j+1] = sum%10;
				rem[i + j] += sum/10;
			}
		}
		string result = "";
		int i = 0;
		while (i<rem.size() && rem[i] == 0) {
			i++;
			
		}
		if (i == rem.size()) return "0";
		if (isNegative) {
            result.push_back('-');
        }
		
		while (i<rem.size()) {
			result.push_back(rem[i]+'0');
			i++;
		}
		return result;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna