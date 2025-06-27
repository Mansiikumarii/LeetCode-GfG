class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        unordered_map<int,vector<int>>adj;
        
        vector<int>inDegree(V,0);
        vector<int>ans;
        
        queue<int>q;
        
        for(auto x : edges){
            int u = x[0];
            int v = x[1];
            
            adj[u].push_back(v);
            inDegree[v]++;  // ek in degree calculate kar li hai
        }
        for(int i=0; i<inDegree.size(); i++){
            if(inDegree[i] == 0) 
            q.push(i);
        }
        while(!q.empty()){
            int x = q.front();
            q.pop();
            ans.push_back(x);
            
            for(auto padosi : adj[x]){
                inDegree[padosi]--;
                
                if(inDegree[padosi] == 0)
                q.push(padosi);
            }
        }
        return ans;
    }
    
};