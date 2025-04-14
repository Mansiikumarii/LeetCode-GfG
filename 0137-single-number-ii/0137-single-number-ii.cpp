class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int one=0, two=0;
      for(int i=0; i<nums.size(); i++){
        int num = nums[i];
        one = (one ^num) & ~two;
        two = (two ^ num) & ~one;
      }
      return one;
    }
};