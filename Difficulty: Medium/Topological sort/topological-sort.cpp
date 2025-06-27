class Solution {
  public:
 void dfs(unordered_map<int, vector<int>>& adj, vector<int>& vis, stack<int>& st, int u) {
    vis[u] = 1;
    for (auto padosi : adj[u]) {
        if (!vis[padosi])
            dfs(adj, vis, st, padosi);
    }
    st.push(u);
}

    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        // unordered_map<int,vector<int>>adj;
        
        // vector<int>inDegree(V,0);
        // vector<int>ans;
        
        // queue<int>q;
        
        // for(auto x : edges){
        //     int u = x[0];
        //     int v = x[1];
            
        //     adj[u].push_back(v);
        //     inDegree[v]++;  // ek in degree calculate kar li hai
        // }
        // for(int i=0; i<inDegree.size(); i++){
        //     if(inDegree[i] == 0) 
        //     q.push(i);
        // }
        // while(!q.empty()){
        //     int x = q.front();
        //     q.pop();
        //     ans.push_back(x);
            
        //     for(auto padosi : adj[x]){
        //         inDegree[padosi]--;
                
        //         if(inDegree[padosi] == 0)
        //         q.push(padosi);
        //     }
        // }
        // return ans;
        
       
        
        unordered_map<int,vector<int>>adj;
        vector<int>ans;
        vector<int> vis(V,0);
        
        for(auto x: edges){
            int u = x[0];
            int v = x[1];
            
            adj[u].push_back(v);
            
        }
        
        stack<int>st;
        
        for(int i=0; i<V; i++){
            if(!vis[i])
            dfs(adj, vis, st, i);
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
    
};