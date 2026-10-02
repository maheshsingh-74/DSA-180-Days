class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n= tokens.size();
        int maxx=0;
        sort(tokens.begin(),tokens.end());
        int score=0;
        int i=0,j=n-1;
        while(i<=j){
            if(tokens[i]<=power){
                power-=tokens[i];
                score++;
                maxx=max(maxx,score);
                i++;
            }
            else if (score>=1){
                score--;
                power+=tokens[j];
                j--;
            }
            else return maxx;
        }
        return maxx;
    }
};