class Solution {
	public:
	string removeSpaces(string& s) {
    
       string ans="";
       
       for(int i =0; i< s.length(); i++){
           if(s[i] != ' '){
               ans+= s[i];
           }
       }
       return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna