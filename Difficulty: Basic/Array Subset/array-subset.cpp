class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        int i=0;
        int j=0;
        
        while(i<a.size() && j<b.size()){
            if(a[i] == b[j]){
                i++;
                j++;
            }
            else
            i++;
        }
        if(j==b.size())
        return true;
        return false;
    }
};