//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
  void solve(int i, int j, int n, int m, vector<vector<int>>& maze, vector<string>& ans,
             vector<vector<int>>& vis, string path) {
      if(i == n-1 && j == m-1){
          ans.push_back(path);
          return;
      }
      
      vis[i][j] = 1;

      // Up
      if(i-1 >= 0 && maze[i-1][j] == 1 && vis[i-1][j] == 0){
          solve(i-1, j, n, m, maze, ans, vis, path + 'U');
      }
      // Down
      if(i+1 < n && maze[i+1][j] == 1 && vis[i+1][j] == 0){
          solve(i+1, j, n, m, maze, ans, vis, path + 'D');
      }
      // Left
      if(j-1 >= 0 && maze[i][j-1] == 1 && vis[i][j-1] == 0){
          solve(i, j-1, n, m, maze, ans, vis, path + 'L');
      }
      // Right
      if(j+1 < m && maze[i][j+1] == 1 && vis[i][j+1] == 0){
          solve(i, j+1, n, m, maze, ans, vis, path + 'R');
      }

      vis[i][j] = 0; // backtrack
  }

  vector<string> ratInMaze(vector<vector<int>>& maze) {
      vector<string> ans;
      string path = "";
      int n = maze.size();
      int m = maze[0].size();
      vector<vector<int>> vis(n, vector<int>(m, 0));
      if(maze[0][0] == 0 || maze[n-1][m-1] == 0) return ans;
      solve(0, 0, n, m, maze, ans, vis, path);
      sort(ans.begin(), ans.end());
      return ans;
  }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        cin >> n;
        cin.ignore();

        vector<vector<int>> mat(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> mat[i][j];
            }
        }

        Solution obj;
        vector<string> result = obj.ratInMaze(mat);
        // sort(result.begin(), result.end());

        if (result.empty())
            cout << "[]";
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends