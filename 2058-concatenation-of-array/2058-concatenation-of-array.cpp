class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        ans.reserve(nums.size() * 2); 

        for (int n : nums)
            ans.push_back(n);

        for (int n : nums)
            ans.push_back(n);

        return ans;
    }
};