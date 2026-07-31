class Solution {
  public:
    int firstIndex(vector<int> &arr) {
        // code here
        int n= arr.size();
        int i=0;
        int ans=-1;
        int j=n-1;
        while(i<=j){
            int mid= i+(j-i)/2;
            if(arr[mid]==1){
                ans= mid;
                j=mid-1;
            }
            else i=mid+1;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna