class Solution {
  public:
    int heapHeight(int n, int arr[]) {
        // code here
        if(n==1)return 1;
        int ans=0;
               while(n!=1){
                   n/=2;
                   ans++;
               }
               return ans;
    }
};