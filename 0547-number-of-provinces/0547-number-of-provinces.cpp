class Solution {
public:

void dfs(vector<vector<int>>& isConnected, int u, vector<int>&vis){
    vis[u] =1;

    for(int j=0; j<isConnected.size(); j++){
        if(isConnected[u][j] == 1 && !vis[j]){
            dfs(isConnected, j, vis);
        }
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
       int n = isConnected.size();

       vector<int>vis(n,0);
       int ans=0;

       for(int i=0; i<n; i++){
        if(!vis[i]){
            dfs(isConnected, i, vis);
            ans++;
        }
       } 
       return ans;
    }
};