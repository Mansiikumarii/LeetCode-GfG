//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
//   void solve(int src, vector<vector<int>>& adj, vector<int>& vis, vector<int>& ans) {
//       ans.push_back(src);
//       vis[src] = 1;
//       for(auto it : adj[src]) {
//           if(vis[it] == 0) {
//               solve(it, adj, vis, ans);
//           }
//       }
//   }

void dfsHelper(vector<vector<int>>& adj, vector<bool>&vis, vector<int>&ans, int u){
    vis[u] = true;
    ans.push_back(u);
    
    //travel karna hai
    for(auto padosi: adj[u]){
        //adj[u] main travel 
        if(!vis[padosi]){
            dfsHelper(adj, vis, ans, padosi);
        }
    }
}
  vector<int> dfs(vector<vector<int>>& adj) {
    //   int v = adj.size(); // Number of vertices
    //   vector<int> vis(v, 0);
    //   vector<int> ans;
    //   solve(0, adj, vis, ans); // Start DFS from node 0
    //   return ans;
    
    
    int n= adj.size(); //number of nodes
    vector<bool>vis(n,false);
    vector<int>ans;
    
    for(int i=0; i<n ; i++){ //there is chance ki forest ho sakta hai
        if(!vis[i]){
            dfsHelper(adj,vis,ans,i);
        }
    }
    return ans;
    
  }
};



//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        int V;
        cin >> V;
        cin.ignore();
        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

        for (int i = 0; i < V; i++) {
            string input;
            getline(cin, input);
            int num;
            vector<int> node;
            stringstream ss(input);
            while (ss >> num) {
                node.push_back(num);
            }
            adj[i] = node;
        }

        Solution obj;
        vector<int> ans = obj.dfs(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends