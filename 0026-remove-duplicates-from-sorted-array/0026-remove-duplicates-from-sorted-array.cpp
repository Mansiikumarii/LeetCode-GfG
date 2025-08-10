class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end()); // remove duplicates & sort
        nums.assign(s.begin(), s.end());      // copy back to nums
        return nums.size();                   // return new length
    }
};
