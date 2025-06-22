class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //approach-1
    // int result=0;
        // for(int i=0; i< nums.size(); i++){
        //     result ^= nums[i];
        // }
        // return result;

//approach 2
// sort(nums.begin(), nums.end());
        
//         for(int i=0; i<nums.size()-1; i+=2){
//             if (nums[i] != nums[i + 1]) {
//                 return nums[i]; // This number doesn't have a pair
//             }
            
//         }
        
//          return nums[nums.size() - 1];



int result =0;
for(int i=0; i<nums.size(); i++){
    result ^= nums[i];
}
return result;
    }
};