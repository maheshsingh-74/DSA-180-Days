class Solution {
    int t[201][10001];
  public:bool solve(int n,vector<int>& arr, int sum){
      if(sum==0)return 1;
      if(n==0)return 0;
      if(t[n][sum]!=-1)return t[n][sum];
      bool take=false;
      if(arr[n-1]<=sum){
      bool take=solve(n-1,arr,sum-arr[n-1]);
  
      bool skip=solve(n-1,arr,sum);
      return t[n][sum]= take||skip;
  }
      else return t[n][sum]= solve(n-1,arr,sum);
  }
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n= arr.size();
        memset(t,-1,sizeof(t));
        return solve(n,arr,sum);
    }
};