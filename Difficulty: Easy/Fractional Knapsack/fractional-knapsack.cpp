class Solution {
public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        int n = val.size();
        vector<pair<int,int>> vec(n);
        for(int i = 0; i < n; i++) {
            vec[i] = {val[i], wt[i]};
        }

        // Sort by value/weight ratio in descending order
        auto lambda = [](pair<int,int> p1, pair<int,int> p2) {
            return (1.0 * p1.first) / p1.second > (1.0 * p2.first) / p2.second;
        };

        sort(vec.begin(), vec.end(), lambda);

        double profit = 0.0;
        for(int i = 0; i < n; i++) {
            if(vec[i].second <= capacity) {
                profit += vec[i].first;
                capacity -= vec[i].second;
            } else {
                profit += (1.0 * vec[i].first * capacity) / vec[i].second;
                break;
            }
        }

        return profit;
    }
};