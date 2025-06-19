class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // auto it = max_element(arr.begin(), arr.end());
        // return it-arr.begin();

        int n = arr.size();
        int low = 0;
        int high = n-1;

        while(low<high){ //<= nahi likha kyunki loop main phas jaega
            int mid = low+(high-low)/2;

            if(arr[mid]< arr[mid+1]) low = mid+1;
            else high = mid;
        }
        return low;
    }
};