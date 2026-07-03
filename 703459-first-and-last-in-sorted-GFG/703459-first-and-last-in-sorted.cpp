class Solution {
  public:
  int findleftmost(vector<int>& arr, int x){
      int l=0;
      int r=arr.size()-1;
      int result=-1;
      while(l<=r){
          int mid=l+(r-l)/2;
          if(arr[mid]==x){
              result=mid;
              r=mid-1;
          }
          else if(arr[mid]<x) l=mid+1;
          else r=mid-1;
      }
      return result;
  }
  int findrightmost(vector<int>& arr, int x){
      int l=0;
      int r=arr.size()-1;
      int result=-1;
      while(l<=r){
          int mid=l+(r-l)/2;
          if(arr[mid]==x){
              result=mid;
              l=mid+1;
          }
          else if(arr[mid]<x) l=mid+1;
          else r=mid-1;
      }
      return result;
  }
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int leftmost=findleftmost(arr,x);
        int rightmost=findrightmost(arr,x);
        return {leftmost, rightmost};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna