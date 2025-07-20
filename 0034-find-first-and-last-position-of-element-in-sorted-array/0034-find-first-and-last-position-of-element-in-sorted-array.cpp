class Solution {
public:


int firstOcc(vector<int>& nums, int k){
    int start = 0, end = nums.size()-1;
    int ans = -1;
    while(start <= end){
        int mid = start+ (end- start)/2;

        if(nums[mid] == k){
             ans = mid;
        end = mid -1;
        }
       

        else if(nums[mid] < k)
        start = mid+1;

        else 
        end = mid-1;
    }
    return ans;
}

int lastOcc(vector<int>& nums, int k){
    int start = 0, end = nums.size()-1;
    int ans = -1;
    while(start <= end){
        int mid = start+ (end- start)/2;

        if(nums[mid] == k){
             ans = mid;
        start = mid +1;
        }
       

        else if(nums[mid] < k)
        start = mid+1;

        else 
        end = mid-1;
    }
    return ans;
}

vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOcc(nums,target);
        int last = lastOcc(nums, target);

        return {first, last};
    }
};