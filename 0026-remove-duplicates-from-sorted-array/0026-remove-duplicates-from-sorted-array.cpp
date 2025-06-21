class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       
        
        // auto last = unique(nums.begin(), nums.end());
        // nums.erase(last, nums.end());
        // return nums.size();

        int idx = 1;
        int n= nums.size();
        for(int i=1; i<n; i++){
            if(nums[i] != nums[idx-1]){
                nums[idx] = nums[i];
                idx++;
            }
        }
        return idx;
    }
};