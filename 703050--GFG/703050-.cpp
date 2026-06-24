class Solution {
  public:
    vector<int> nextGreatest(vector<int> arr) {
        // code here
        int max_val=-1;
        for(int i=arr.size()-1;i>=0;i--){
            int current_val=arr[i];
            arr[i]=max_val;
            max_val=max(current_val,max_val);
        }
        return arr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna