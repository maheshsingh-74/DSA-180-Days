class Solution {
public:
    bool detectcycle(int node, int prev, vector<vector<int>> &adj, vector<bool> &visited) {
        visited[node] = 1;
        for (int neighbor : adj[node]) {
            if (neighbor == prev) continue; 
            if (visited[neighbor]) return true; 
            if (detectcycle(neighbor, node, adj, visited)) return true;
        }
        return false;
    }

    bool isCycle(int V, vector<vector<int>> &edges) {
        vector<vector<int>> adj(V);
        for (auto &e : edges) {
            int u = e[0], v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<bool> visited(V, 0);
        for (int i = 0; i < V; i++) {
            if (!visited[i] && detectcycle(i, -1, adj, visited))
                return true;
        }
        return false;
    }
};