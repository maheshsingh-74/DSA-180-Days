class Solution {
public:
    int reverseDegree(string s) {
        long long ans = 0;
        int i = 1;
        int n = s.length();
        while (i <= s.length()) {
            int x = 26 - (s[i - 1] - 'a');
            ans += x * i;
            i++;
        }
        return (int)ans;
    }
};