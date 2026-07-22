class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        
        ans.push_back(- 1);
        int maxx = arr[n-1];
        
        for (int i = n - 2; i >= 0; i--) {
                       ans.push_back(maxx);

           maxx=max(maxx,arr[i]);
            //
            
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna