class Solution {
public:
    // Find the index of the smallest element (pivot)
    int pivotIndex(vector<int>& nums){
        int s = 0, e = nums.size() - 1;
        int mid;
        
        if (nums[s] <= nums[e]) return 0; // Already sorted, pivot at 0

        while(s < e){
            mid = s + (e - s) / 2;
            if(nums[mid] >= nums[0]){
                s = mid + 1;
            } else {
                e = mid;
            }
        }
        return s; // Pivot index (smallest element)
    }

    // Standard binary search
    int binarySearch(vector<int>& arr, int s, int e, int key){
        int start = s;
        int end = e;

        while(start <= end){
            int mid = (start + end) / 2;
            if(arr[mid] == key){
                return mid;
            }
            if(arr[mid] < key){
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int pivot = pivotIndex(nums);

        if(target >= nums[pivot] && target <= nums[nums.size()-1]){
            return binarySearch(nums, pivot, nums.size()-1, target);
        } else {
            return binarySearch(nums, 0, pivot - 1, target);
        }
    }
};
