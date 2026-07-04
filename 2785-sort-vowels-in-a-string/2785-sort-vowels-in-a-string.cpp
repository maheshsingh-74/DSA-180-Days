class Solution {
public: bool isvowel(char ch){
ch=tolower(ch);
return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
}
    string sortVowels(string s) {
       unordered_map<char,int>mp;
       for(char&ch:s){
        if(isvowel(ch)) mp[ch]++;
       }
       string temp="AEIOUaeiou";
       int j=0;
       for(int i=0;i<s.length();i++){
        if(isvowel(s[i])){
            while(mp[temp[j]]==0) j++;
        
        s[i]=temp[j];
        mp[temp[j]]--;
       }
       }
       return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna