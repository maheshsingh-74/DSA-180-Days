class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), [](auto &a, auto &b){
            return a[1] < b[1];
        });

        int count = 1;
        int prev_end = pairs[0][1];

        for (int i = 1; i < pairs.size(); i++) {
            if (pairs[i][0] > prev_end) {
                count++;
                prev_end = pairs[i][1];
            }
        }
        return count;
    }
};