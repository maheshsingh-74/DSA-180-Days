class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        // code here
        stack<string> ans;
        for(int i=0;i<arr.size();i++){
            if(ans.empty())
            ans.push(arr[i]);
            else
                if(ans.top()==arr[i])
                ans.pop();
                else
                ans.push(arr[i]);
            }
        
        return ans.size();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna