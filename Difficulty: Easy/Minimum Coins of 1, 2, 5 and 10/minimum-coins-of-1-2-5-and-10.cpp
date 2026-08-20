class Solution {
  public:
    int findMin(int n) {
        // code here
        int arr[]={10,5,2,1};
        int ans=0;
        int i=0;
        while(n){
            if(n/arr[i]>=1){
                ans+=n/arr[i];
                n=n%arr[i];
                
            }
            i++;
        }
        return ans;
    }
};