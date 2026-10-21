class Solution {
public:
    bool cycledetect(int node, int parent,
                     vector<bool>& visited,
                     vector<vector<int>>& adj) {
        visited[node] = 1;

        for (int j = 0; j < adj[node].size(); j++) {
            int neighbor = adj[node][j];

            if (neighbor == parent)
                continue;

            if (visited[neighbor])
                return true;

            if (cycledetect(neighbor, node, visited, adj))
                return true;
        }

        return false;
    }

    bool isCycle(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);

        for (auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<bool> visited(V, 0);

        for (int i = 0; i < V; i++) {
            if (!visited[i] &&
                cycledetect(i, -1, visited, adj)) {
                return true;
            }
        }

        return false;
    }
};
