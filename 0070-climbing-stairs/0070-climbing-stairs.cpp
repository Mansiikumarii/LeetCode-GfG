class Solution {
public:
int f(int idx, vector<int>&dp){
    if(idx ==0) return 1;
    if(idx<1) return 0;
    if(dp[idx] != -1) return dp[idx];
    int left = f(idx-1, dp);
    int right = f(idx-2, dp);
    return dp[idx] = left+ right; 
}
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return f(n,dp);
    }
};