class Solution {
  public:
    int findUnique(vector<int> &arr) {
        // code here
        int unique=0;
        for(int num:arr) unique=unique^num;
        return unique;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna