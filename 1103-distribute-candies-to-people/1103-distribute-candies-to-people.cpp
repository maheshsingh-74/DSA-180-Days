class Solution {
public:
    vector<int> distributeCandies(int c, int n) {
        vector<int> arr(n, 0);
        int x = 1;
        while (c > 0) {
            for (int i = 0; i < n; i++) {
                if (c >= x) {
                    arr[i] += x;

                    c -= x;
                    x++;
                } else {
                    arr[i] += c;
                    c = 0;
                    break;
                }
            }
        }
        return arr;
    }
};