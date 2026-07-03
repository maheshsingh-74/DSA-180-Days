class Solution {
  public:
    bool checkElements(int start, int end, vector<int> &arr) {
        // code here
       int count=end-start+1;
       for(int i=0;i<arr.size();i++){
           if(arr[i]>=start && arr[i]<=end) count--;
       }
            
        return count==0;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna