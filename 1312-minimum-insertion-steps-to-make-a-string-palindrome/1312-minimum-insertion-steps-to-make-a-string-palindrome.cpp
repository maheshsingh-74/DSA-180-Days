class Solution {
public:int t[501][501];
int solve(string &s,int i,int j){
    if(i>=j)return 0;
    if(t[i][j]!=-1)return t[i][j];
    if(s[i]==s[j])return t[i][j]=solve(s,i+1,j-1);
    else return t[i][j]=1+min(solve(s,i+1,j),solve(s,i,j-1));
}
    int minInsertions(string s) {
        memset(t,-1,sizeof(t));
        return solve(s,0,s.length()-1);
    }
};