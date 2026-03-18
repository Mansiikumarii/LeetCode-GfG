class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        int n=a.size();
        if(m==0 || n==0)
        return 0;
        
        sort(a.begin(), a.end());
        
        int ans = INT_MAX;
        for(int i=0; i+m-1<n; i++){
            int diff = a[i+m-1] - a[i];
             ans = min(ans, diff);
        }
        return ans;
    }
};