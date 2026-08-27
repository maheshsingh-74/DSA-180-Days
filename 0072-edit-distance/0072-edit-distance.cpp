class Solution {
    int t[502][502];
public: int solve(string &w1, string &w2,int i,int j){
    if(i==w1.length()) return w2.length()-j;
    if(j==w2.length()) return w1.length()-i;
    if(t[i][j]!=-1)return t[i][j];

    int ans=0;
    if(w1[i]==w2[j]) return t[i][j]= solve(w1,w2,i+1,j+1);
    else {
        //insert
        int insertt=1+solve(w1,w2,i,j+1);
        int deletee=1+solve(w1,w2,i+1,j);
        int replacee=1+solve(w1,w2,i+1,j+1);
        return t[i][j]= min({insertt,deletee,replacee});
    }
}
    int minDistance(string w1, string w2) {
        memset(t,-1,sizeof(t));
       return solve(w1,w2,0,0); 
    }
};