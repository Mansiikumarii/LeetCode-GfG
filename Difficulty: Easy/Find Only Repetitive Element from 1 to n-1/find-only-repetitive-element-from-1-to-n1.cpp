// User function Template for C++
class Solution {
  public:
    int findDuplicate(vector<int>& arr) {
        // code here
        int n = arr.size();
        int res = 0;
        for(int i=0; i<n-1; i++){
            res = res^(i+1)^arr[i];
        }
        res = res^arr[n-1];
        return res;
    }
};