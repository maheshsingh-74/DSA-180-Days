class Solution {
public:
    int minSteps(string s, string t) {
        int mp[26]={0};
        for(int i=0;i<s.length();i++){
            mp[s[i]-'a']++;
            mp[t[i]-'a']--;
        }
        int result=0;
        for(int i=0;i<26;i++){
            if(mp[i]>0) result+=mp[i];
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna