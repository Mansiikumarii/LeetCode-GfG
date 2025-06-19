class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        auto it = max_element(arr.begin(), arr.end());
        return it-arr.begin();
    }
};