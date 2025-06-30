class Solution {
public:
    void helper(vector<vector<int>>& mat, vector<vector<bool>>& vis, int r, int c, string path, set<string>& ans) {
        int n = mat.size();
        if (r < 0 || c < 0 || r >= n || c >= n || mat[r][c] == 0 || vis[r][c]) {
            return;
        }

        if (r == n - 1 && c == n - 1) {
            ans.insert(path);
            return;
        }

        vis[r][c] = true;

        // Down
        helper(mat, vis, r + 1, c, path + "D", ans);
        // Up
        helper(mat, vis, r - 1, c, path + "U", ans);
        // Left
        helper(mat, vis, r, c - 1, path + "L", ans);
        // Right
        helper(mat, vis, r, c + 1, path + "R", ans);

        vis[r][c] = false;
    }

    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n = maze.size();
        set<string> pathSet;
        if (maze[0][0] == 0 || maze[n - 1][n - 1] == 0) return {};

        vector<vector<bool>> vis(n, vector<bool>(n, false));
        helper(maze, vis, 0, 0, "", pathSet);

        // Convert set to vector
        return vector<string>(pathSet.begin(), pathSet.end());
    }
};
