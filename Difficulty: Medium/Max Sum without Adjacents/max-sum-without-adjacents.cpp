// User function template for C++
class Solution {
  public:
  int solveMem(vector<int>& nums,int n,vector<int>&dp){
      if(n<0)
      return 0;
      
      if(n==0)
      return nums[0];
      
      if(dp[n] != -1)
      return dp[n];
      int incl = solveMem(nums, n-2,dp)+ nums[n];
      int excl = solveMem(nums, n-1,dp);
      dp[n] =  max(incl, excl);
      return dp[n];
      
  }
    // calculate the maximum sum with out adjacent
    int findMaxSum(vector<int>& arr) {
        // code here
        int n= arr.size();
        vector<int> dp(n, -1);
        return solveMem(arr, n-1, dp);
    }
};