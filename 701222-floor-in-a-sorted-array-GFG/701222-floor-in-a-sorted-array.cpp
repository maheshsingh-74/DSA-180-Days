class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int l=0;
        int r=arr.size()-1;
        int result=-1;
        
        while(l<=r){
            int mid=l+(r-l)/2;
            if(arr[mid]<=x){
                result=mid;
                l=mid+1;
            }
            else {
                r=mid-1;
            }
        }
        return result;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna