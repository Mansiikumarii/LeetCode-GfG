class Solution {
  public:
  void dfs(unordered_map<int,vector<int>>&adj, vector<int>& color, int u, bool &ans, int currColor){
      if(ans == false) return;
      color[u] = currColor;
      for(auto padosi: adj[u]){
          if(color[padosi] == -1){
              dfs(adj,color,padosi,ans,1-currColor);
          }
          else if(color[padosi] == currColor){
              ans = false;
              return;
          }
      }
      
      
  }
    bool isBipartite(int V, vector<vector<int>> &edges) {
        // Code here
        unordered_map<int,vector<int>>adj;
        bool ans= true;
        for(auto x: edges){
            
            int u = x[0];
            int v= x[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>color(V,-1);
        
        for(int i=0; i<V; i++){
            if(color[i] == -1){
                dfs(adj,color,i,ans,0);
            }
        }
        return ans;
    }
};

