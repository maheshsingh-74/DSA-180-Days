class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        int n= -1;
        while(k--){
            n++;
            
        }
        return arr[n];
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna