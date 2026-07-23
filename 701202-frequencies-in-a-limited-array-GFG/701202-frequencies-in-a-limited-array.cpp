class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
     int n = arr.size();
        vector<int> result(n, 0);
        
        for (int num : arr) {
            // arr elements are 1-based (1 to n)
          //  if (num >= 1 && num <= n) {
                result[num - 1]++;
            
        }
        
        return result;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna