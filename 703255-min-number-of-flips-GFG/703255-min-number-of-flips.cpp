class Solution {
	public:
	int minFlips(string& s) {
		int flip1=0;
		int n= s.length();
		for(int i=0;i<n;i++){
		    if (i%2==0){
		        if(s[i]!='0')flip1++;
		        }else {
		            if(s[i]!='1') flip1++;
		        
		    }
		}    return min(flip1,n-flip1);
		
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna