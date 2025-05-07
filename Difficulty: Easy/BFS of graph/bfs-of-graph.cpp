//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
    //Number of vertex nikalo
    int v=adj.size(); // Number of vertices
    vector<int>vis(v,0); // Visited array
    queue<int>q;
    q.push(0);
    vis[0]=1;
    vector<int>ans;
    while(q.empty() == false){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        // Traverse all adjacent vertices of the current node
        for(auto it :adj[node]){//q ke andar gaye aur mark kiya ki visited hai ya nahii
            if(vis[it]==0){
            q.push(it);
            vis[it] =1; // agar visited hai toh 1 mark kar do
            }
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
        // Use vector of vectors instead of array of vectors.
        vector<vector<int>> adj(V);

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
        vector<int> ans = obj.bfs(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends