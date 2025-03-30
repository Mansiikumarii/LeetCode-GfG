class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        
        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;  // Convert value to index
            if (nums[index] < 0) {
                res.push_back(index + 1); // Already visited, so duplicate
            }
            nums[index] = -nums[index];  // Mark as visited
        }
        
        return res;
    }
};
