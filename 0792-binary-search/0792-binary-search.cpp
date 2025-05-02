class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low =0;
        int high = nums.size()-1;
       
        while(low<=high){
             int mid = low +(high -low)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target){
                high = mid-1; //Target is in left half
            }
            else{
                low = mid+1; //Target is in right half
            }
        }
        return -1;
    }
};