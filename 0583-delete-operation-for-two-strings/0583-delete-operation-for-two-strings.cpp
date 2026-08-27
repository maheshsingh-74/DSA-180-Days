class Solution {
public:int t[1001][1001];
    int minDistance(string s1, string s2) {
         int n= s1.size();
        int m=s2.size();
        memset(t,0,sizeof(t));
        for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
       if(s1[i-1]==s2[j-1]) t[i][j]= 1+ t[i-1][j-1];
       else t[i][j]= max(t[i-1][j],t[i][j-1]);

        }}
      //  return find(n,m,s1,s2);
      return m+n-2*t[n][m];
    }
};