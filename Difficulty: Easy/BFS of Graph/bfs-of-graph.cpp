class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int v= adj.size();
        queue<int>q;
        q.push(0);
        vector<bool>visited(v,0);
        visited[0]=1;
        vector<int>ans;
        while(!q.empty()){
            int node=q.front();
            ans.push_back(node);
            q.pop();
            for(int j=0;j<adj[node].size();j++){
                if(!visited[adj[node][j]]){
                    visited[adj[node][j]]=1;
                    q.push(adj[node][j]);
                }
            }
        }
        return ans;
    }
};