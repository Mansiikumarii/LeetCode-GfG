class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int max = INT_MIN;
        for(int i=0; i<arr.size(); i++){
            if(max<arr[i])
            max = arr[i];
        }
        return max;
    }
};
