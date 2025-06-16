class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // for(int i=1; i<nums.size(); i++){
        //     nums[i] = nums[i]+nums[i-1];
        // }
        // return nums;

        int n = nums.size();
        vector<int>pre(n,0);

        pre[0] = nums[0];

        for(int i=1; i<n; i++){
            pre[i] = nums[i] + pre[i-1];
        }
        return pre;
    }
};