class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        // code here
        int i=0;
        int j=arr.size()-1;
        int result;
        while(i<j){
            int mid = i+(j-i)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                result=arr[mid];
                break;
            }
            else if (arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]) i=mid+1;
            else j=mid;
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna