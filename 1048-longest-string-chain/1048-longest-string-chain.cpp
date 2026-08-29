class Solution {
public:
    int n;
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
    static bool comp(string& w1, string& w2) {
        return w1.length() < w2.length();
    }
    int longestStrChain(vector<string>& words) {
        n = words.size();
        vector<int>t(n,1);
        sort(words.begin(), words.end(), comp);
        int maxLIS=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(ispred(words[i],words[j])){
                    t[i]=max(t[i],t[j]+1);
                    maxLIS=max(maxLIS,t[i]);
                }
            }
        }
        return maxLIS;
    }
};