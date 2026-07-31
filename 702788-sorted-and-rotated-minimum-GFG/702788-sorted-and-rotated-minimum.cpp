class Solution {
  public:
    int findMin(vector<int>& arr) {
        // code here
        int l=0;
        int n=arr.size();
        int r=n-1;
      
        while(l<r){
            int mid=l+(r-l)/2;
            if(arr[r]<arr[mid]){
                l=mid+1;
            }
                else
                r=mid;
            
        }
        return arr[l];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna