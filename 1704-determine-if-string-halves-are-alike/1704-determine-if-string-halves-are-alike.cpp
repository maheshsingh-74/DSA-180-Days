class Solution {
public:
bool isvowel(char s){
    return s=='a'|| s=='e'|| s=='i'|| s=='o'|| s=='u'|| s=='A'|| s=='E'|| s=='I'|| s=='O'|| s=='U';
}
    bool halvesAreAlike(string s) {
    int count1=0,count2=0;
    int n=s.size();
        string s1="";
        for(int i=0;i<n/2;i++){
            s1.push_back(s[i]);
            
        }
        for(int i=n/2;i<s.size();i++){
            if(isvowel(s[i])){
                count1++;
            }
        }
           for(int i=0;i<s1.size();i++){
            if(isvowel(s[i])){
                count2++;
            }
        }
return count1==count2;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna