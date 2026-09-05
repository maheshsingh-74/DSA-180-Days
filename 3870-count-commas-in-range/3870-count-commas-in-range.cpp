class Solution {
public:
    int countCommas(int n) {
        if(n<1000)return 0;
        int d=n-1000;
        return d+1;
    }
};