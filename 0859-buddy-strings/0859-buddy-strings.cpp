class Solution {
public: bool checkfreq(string &s){
    int arr[26]={0};
    for(char &ch:s){
        arr[ch-'a']++;
        if(arr[ch-'a']>1) return true;
    }
    return false;
}
    bool buddyStrings(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        if(s==goal) return checkfreq(s);
         vector<int>idx;
        for(int i=0;i<s.length();i++){
         if(s[i]!=goal[i]) idx.push_back(i);

        }
        if(idx.size()!=2){
            return false;
        }
        swap(s[idx[0]] ,s[idx[1]]);
        return s==goal;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna