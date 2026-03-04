class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int> ret;
        for(int i=0; i<arr.size(); i++){
            if(i==0)
            ret.push_back(arr[i]);
            else if(arr[i-1] != arr[i])
            ret.push_back(arr[i]);
        }
        return ret;
    }
};