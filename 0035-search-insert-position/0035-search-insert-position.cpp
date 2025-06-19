class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //  return lower_bound(nums.begin(), nums.end(), target) - nums.begin();

        // int n = nums.size();
        // int low =0;
        // int high = n;

        // if(nums[n-1]<target) return n;

        // while(low<= high){
        //     int mid = low+(high-low)/2;

        //     if(nums[mid] == target) return mid;

        //     if(target <nums[mid]){
        //         high = mid-1;
        //     }
        //     else{
        //         low = mid+1;
        //     }
        // }
        // return low;

      int n=nums.size();
      int low=0;
      int high =n;

      if(nums[n-1]<target) return n;

      while(low<=high){
        int mid = low+(high-low)/2;

        if(nums[mid] == target ) return mid;

        if(target < nums[mid])
        high = mid-1;

        else
        low = mid+1;
      }
      return low;
    }
};