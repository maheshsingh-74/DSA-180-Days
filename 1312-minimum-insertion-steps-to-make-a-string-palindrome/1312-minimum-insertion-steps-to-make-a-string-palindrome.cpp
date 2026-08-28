class Solution {
public:
    int minInsertions(string s) {
        int n = s.length();

        vector<vector<int>> t(n, vector<int>(n, 0));

        for(int L = 2; L <= n; L++) {
            for(int i = 0; i < n - L +1; i++) {
                int j = i + L - 1;

                if(s[i] == s[j]) { 
                    t[i][j] = t[i+1][j-1];
                } else {
                    t[i][j] = 1 + min(t[i][j-1], t[i+1][j]);
                }
            }
        }

        return t[0][n-1]; 

    }
};