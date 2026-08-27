class Solution {
    int t[1001][1001];
public: /*int find(int n, int m,string &s1,string &s2){
    if(n==0||m==0)return 0;
    if(t[n][m]!=-1)return t[n][m];
    if(s1[n-1]==s2[m-1]) return t[n][m]= 1+find(n-1,m-1,s1,s2);
    else return t[n][m]= max(find(n-1,m,s1,s2),find(n,m-1,s1,s2));
}*/
    int longestCommonSubsequence(string s1, string s2) {
        int n= s1.size();
        int m=s2.size();
        memset(t,0,sizeof(t));
        for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
       if(s1[i-1]==s2[j-1]) t[i][j]= 1+ t[i-1][j-1];
       else t[i][j]= max(t[i-1][j],t[i][j-1]);

        }}
      //  return find(n,m,s1,s2);
      return t[n][m];
    }
};