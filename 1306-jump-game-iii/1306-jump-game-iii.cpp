class Solution {
public:
    unordered_map<int,int> memo; // 1 = true, -1 = false

    bool solve(vector<int>& arr, int i, vector<int>& visited) {
        int n = arr.size();
        if (i < 0 || i >= n || visited[i]) return false;   // out of bounds or already tried
        if (arr[i] == 0) return true;                      // reached a zero!
        if (memo.count(i)) return memo[i] == 1;             // already computed

        visited[i] = 1;                                     // mark as being explored (this run)
        bool res = solve(arr, i + arr[i], visited) ||
                   solve(arr, i - arr[i], visited);
        memo[i] = res ? 1 : -1;                              // store result
        return res;
    }

    bool canReach(vector<int>& arr, int start) {
        vector<int> visited(arr.size(), 0);
        return solve(arr, start, visited);
    }
};