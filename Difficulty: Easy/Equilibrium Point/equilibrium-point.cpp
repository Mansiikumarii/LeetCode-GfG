class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int total=0;
        int n= arr.size();
        for(int i=0; i<n; i++){
            total += arr[i];
        }
        int leftSum = 0;
        for(int i=0; i<n; i++){
            int rightSum = total - leftSum- arr[i];
            if(rightSum == leftSum )
            return i;
            
            leftSum += arr[i];
        }
        return -1;
    }
};