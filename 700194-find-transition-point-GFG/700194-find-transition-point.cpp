class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        // code here
     long long count=0;
     for(int i=0;i<arr.size();i++){
         if(arr[i]==0) count++;
         else if(arr[i]==1){
             return count;
             break;
         }
         else return 0;
     }
     return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna