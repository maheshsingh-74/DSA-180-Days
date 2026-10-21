class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj,
             vector<bool>& visited, stack<int>& s) {
        visited[node] = 1;

        for (int j = 0; j < adj[node].size(); j++) {
            int neighbor = adj[node][j];

            if (!visited[neighbor]) {
                dfs(neighbor, adj, visited, s);
            }
        }

        s.push(node);
    }

    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);

        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
        }

        stack<int> s;
        vector<bool> visited(V, 0);

        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                dfs(i, adj, visited, s);
            }
        }

        vector<int> ans;

        while (!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }

        return ans;
    }
};


/*class Solution {
  public: void dfs(int node,vector<vector<int>>& edges,vector<bool>visited,stack<int>&s){
      visited[node]=1;
      for(int j=0;j<edges[node].size();j++){
          if(!visited[edges[node][j]])
          dfs(edges[node][j],edges,visited,s);
      }
      s.push(node);
  }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        stack<int>s;
        vector<bool>visited(V,0);
     for(int i=0;i<V;i++){
        if(!visited[i]) dfs(i,edges,visited,s);
    }
     vector<int>ans;
     while(!s.empty()){
         ans.push_back(s.top());
         s.pop();
     }
     return ans;
    }
};*/