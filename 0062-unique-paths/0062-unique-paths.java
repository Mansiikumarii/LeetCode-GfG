class Solution {
    int[][] dp;
    public int solve(int i, int j){
        
        if(i==0 && j==0)
        return 1;

        if(i<0 || j<0)
        return 0;

        if (dp[i][j] != -1)
        return dp[i][j];
        int up = solve(i-1, j);
        int left = solve(i,j-1);

        dp[i][j] = left+up;
        return dp[i][j];
    }
    public int uniquePaths(int m, int n) {
        dp = new int[m][n];
        
        for(int i=0; i<m; i++){
            Arrays.fill(dp[i],-1);
        }
        return solve( m-1, n-1);

    }
}