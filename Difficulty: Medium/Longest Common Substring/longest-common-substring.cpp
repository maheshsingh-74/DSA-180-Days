class Solution {
  public:int t[1001][1001];
  int find(int n, int m,string &s1,string &s2,int &ans){
      if(n==0 ||m==0)return 0;
      int len=0;
      if(t[n][m]!=-1)return t[n][m];
      if(s1[n-1]==s2[m-1]){  len=1+find(n-1,m-1,s1,s2,ans);
      ans=max(ans,len);
      }
      find(n-1,m,s1,s2,ans);
      find(n,m-1,s1,s2,ans);
      return t[n][m]=len;
  }
    int longCommSubstr(string& s1, string& s2) {
        // code here
        int n=s1.size();
        int m= s2.size();
        int ans=0;
        memset(t,-1,sizeof(t));
        find(n,m,s1,s2,ans);
        return ans;
    }
};