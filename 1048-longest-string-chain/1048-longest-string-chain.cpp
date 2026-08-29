class Solution {
public:
    int n;
    int t[1001][1001];
    bool ispred(string s1, string s2) {
        int a = s2.length();
        int b = s1.length();
        if (a >= b || b - a != 1)
            return 0;
        int x = 0;
        int y=0;
        while(x<a &&y<b){
            if(s2[x]==s1[y])x++;
            y++;
        }
        return x==a;
    }
    int lis(vector<string>& words, int i, int p) {
        if (i >= n)
            return 0;
            
            if(p!=-1 && t[i][p]!=-1)return t[i][p];
        int taken=0;
        if (p == -1 || ispred(words[i], words[p])) {
            taken = 1 + lis(words, i + 1, i);
        }
        int skip = lis(words, i + 1, p);
        if(p!=-1)
        return t[i][p]= max(taken, skip);
    return max(taken, skip);
    }
    static bool comp(string& w1, string& w2) {
        return w1.length() < w2.length();
    }
    int longestStrChain(vector<string>& words) {
        n = words.size();
        memset(t,-1,sizeof(t));
        sort(words.begin(), words.end(), comp);
        return lis(words, 0, -1);
    }
};