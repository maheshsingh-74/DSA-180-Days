class Solution {
  public:
    int maxProduct(vector<int> &arr, int k) {
        int n= arr.size();
          sort(arr.begin(),arr.end());
          vector<int>prefix(n,1);
          prefix[0]=arr[0];
          vector<int>suffix(n,1);
          suffix[n-1]=arr[n-1];
          for(int i=1;i<n;i++) prefix[i]=prefix[i-1]*arr[i];
          for(int i=n-2;i>=0;i--){
              suffix[i]=suffix[i+1]*arr[i];
          }
          int ans= prefix[k-1];
          int left=k-2;
          int right=n-1;
          while(left>=0 || right>=n-k){
              int leftproduct=(left>=0)? prefix[left] : 1;
              int rightproduct=(right>=n-k) ?suffix[right] : 1;
              ans= max(ans,leftproduct*rightproduct);
              left--;
              right--;
          }
          return ans;
    }
};