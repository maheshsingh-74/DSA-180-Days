class Solution {

public:
    int uniquePaths(int m, int n) {
       vector<vector<int>>t(m,vector<int>(n));
       t[0][0]=0;
for(int col=1;col<n;col++){
t[0][col]=1;
}
    for(int row=0;row<m;row++){
        t[row][0]=1;
}
for(int i=1;i<m;i++){
    for(int j=1;j<n;j++){
        t[i][j]=t[i-1][j]+t[i][j-1];
    }
}
       return t[m-1][n-1];
    }
};