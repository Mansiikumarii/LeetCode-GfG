class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int ans = 1;
        int count =1;
        for(int i=1; i<arr.size(); i++){
            if(arr[i] ==arr[i-1]){
                count++;
            }
            else
            count = 1;
            ans = max(ans, count);
        }
        return ans;
    }
};