class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int start = 0, end = nums.size();

        for(int i=0; i<end; i++){
            int rightSum =0;
            for(int j= i+1; j<end; j++){
                rightSum += nums[j];
            }
            if(start == rightSum)
            return i;

            start += nums[i];
        }
        return -1;
    }
};