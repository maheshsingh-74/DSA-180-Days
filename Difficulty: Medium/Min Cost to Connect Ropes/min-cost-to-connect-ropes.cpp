class Solution {
  public:
    int minCost(vector<int>& arr) {
        if (arr.size() <= 1) return 0;

        priority_queue<long long, vector<long long>, greater<long long>> pq(arr.begin(), arr.end());

        long long totalCost = 0;

        while (pq.size() > 1) {
            long long first = pq.top();
            pq.pop();

            long long second = pq.top();
            pq.pop();

            long long currentCost = first + second;
            totalCost += currentCost;

            pq.push(currentCost);
        }

        return totalCost;
    }
};