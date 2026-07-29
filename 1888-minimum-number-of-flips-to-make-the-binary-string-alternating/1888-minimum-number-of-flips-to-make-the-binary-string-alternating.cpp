class Solution {
public:
    int minFlips(string s) {
        	int n= s.length();
            string s1, s2;
            for(int i=0;i<2*n;i++){
                s1+=(i%2) ? '0':'1';
                 s2+=(i%2) ? '1':'0';
            }
            int flip1=0;int flip2=0;
            int i=0,j=0;
            int result=INT_MAX;
            while(j<2*n){
                if(s[j%n]!=s1[j])flip1++;
                if(s[j%n]!=s2[j])flip2++;
                if(j-i+1>n){
                    if(s[i%n]!=s1[i])flip1--;
                    if(s[i%n]!=s2[i])flip2--;
                    i++;
                }
                if(j-i+1==n){
                    result=min({flip1,flip2,result});
                }
                j++;
            }
		return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna