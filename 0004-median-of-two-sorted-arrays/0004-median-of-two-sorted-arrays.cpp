#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        // Ensure that nums1 is the smaller array
        if (n1 > n2) 
            return findMedianSortedArrays(nums2, nums1);

        int low = 0, high = n1;
        int left = (n1 + n2 + 1) / 2; // The left part of the combined array

        while (low <= high) {
            int mid1 = (low + high) / 2;
            int mid2 = left - mid1;

            int l1 = INT_MIN, l2 = INT_MIN;
            int r1 = INT_MAX, r2 = INT_MAX;

            // Get the left and right elements from nums1 and nums2
            if (mid1 < n1) r1 = nums1[mid1];
            if (mid2 < n2) r2 = nums2[mid2];
            if (mid1 > 0) l1 = nums1[mid1 - 1];
            if (mid2 > 0) l2 = nums2[mid2 - 1];

            // Check if we have found the correct partition
            if (l1 <= r2 && l2 <= r1) {
                // Odd total length: return max of left parts
                if ((n1 + n2) % 2 == 1)
                    return max(l1, l2);
                // Even total length: return average of max left and min right
                return (double)(max(l1, l2) + min(r1, r2)) / 2.0;
            } 
            // Adjust binary search range based on the partition condition
            else if (l1 > r2) {
                high = mid1 - 1;
            } else {
                low = mid1 + 1;
            }
        }

        return 0; // This will never be reached if inputs are valid
    }
};
