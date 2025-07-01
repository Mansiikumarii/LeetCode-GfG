class Solution {
public:
int solve(int i, int n, vector<int>&nums,vector<int>&dp){
    if(i>=n) return 0; // agar i value bahar chali jae
    if(dp[i] != -1) return dp[i];
   
     int chori = nums[i]+solve(i+2,n,nums,dp); //kitna saman churaya hai
     int not_chori = solve(i+1, n, nums,dp);
    return dp[i] = max(chori, not_chori);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n, -1);
        return solve(0,n, nums,dp); //0 index se start kar rah hai
    }
};