class Solution {
  public:
    string countSort(string s) {
        // code here
        string ans="";
        int arr[26]={0};
        for(char &ch:s){
            arr[ch-'a']++;
        }
        for (int i=0;i<26;i++){
            ans.append(arr[i],(char)('a'+i));
        }
    
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna