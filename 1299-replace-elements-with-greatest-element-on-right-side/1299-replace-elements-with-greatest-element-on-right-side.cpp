class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxx = -1;
        
        for (int i = n - 1; i >= 0; i--) {
            int temp = arr[i];
            arr[i] = maxx;
            maxx = max(maxx, temp);
        }
        
        return arr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna