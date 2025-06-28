// User Function Template
class Solution {
  public:
    #define p pair<int,int>
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        
        int n = edges.size();
        unordered_map<int,vector<p>>adj;
        vector<int>res(n, INT_MAX);
        
        for(auto x: edges){
            
            int u = x[0];
            int v = x[1];
            int w = x[2];
            
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        
        priority_queue<p, vector<p>, greater<p>>pq;
        
        pq.push({0, src});
        res[src] = 0;
        
        while(!pq.empty()){
            
            int u = pq.top().second;
            int first_dist = pq.top().first;
            pq.pop();
            
            for(auto padosi: adj[u]){
                int v = padosi.first;
                int sec_dist = padosi.second;
                
                if(first_dist + sec_dist < res[v]){
                    res[v] = first_dist + sec_dist;
                    pq.push({res[v], v});
                }
            }
        }
        
        return res;
        
        
        
        
        
    }
};