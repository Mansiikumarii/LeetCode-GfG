class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int n=nums.size();
        // int totalsum= n*(n+1)/2;
        // int actualsum = 0;

        // for(int num: nums){
        //     actualsum = actualsum + num;

        // }
        // return totalsum - actualsum;

        int n= nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            if(i != nums[i]) return i;
        }
        return n;
    }
};