// User function template for C++
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(), arr.end());
        return arr[k-1];
        
    }
};