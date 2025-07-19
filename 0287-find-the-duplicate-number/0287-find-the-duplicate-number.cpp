class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    //    unordered_map<int,int> mp;
    //    for(auto x: nums){
    //     if(mp.count(x)) return x;
    //     mp[x]++;
    //    }
    //    return -1;

    sort(nums.begin(), nums.end());
    for(int i=0; i<nums.size()-1; i++){
        if(nums[i] == nums[i+1]){
            return nums[i];
        }
    }
    return -1;
    } 
};