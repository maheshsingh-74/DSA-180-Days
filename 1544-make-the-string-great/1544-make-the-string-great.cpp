class Solution {
public:
    string makeGood(string s) {
      stack<char>ans;
      int i=0;
      while(i<s.size()){
        if(ans.empty()){
            ans.push(s[i]);
            i++;
        }
        else if(abs(ans.top() - s[i]) != 32){
            ans.push(s[i]);
            i++;
        }
            else if( abs(ans.top() - s[i]) == 32){
                ans.pop();
                i++;
            }

      }
      string result = "";
while (!ans.empty()) {
    result += ans.top();
    ans.pop();
}
reverse(result.begin(), result.end());
return result;
    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna