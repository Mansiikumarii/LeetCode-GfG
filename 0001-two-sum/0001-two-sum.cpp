class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // map<int,int>mpp;
        // int n = nums.size();
        // for(int i=0; i<n;i++){
        //     int num = nums[i];
        //     int moreNeeded = target - num;
        //     if(mpp.find(moreNeeded) != mpp.end()){
        //         return{mpp[moreNeeded],i};
        //     }
        //     mpp[num]=i;
        // }
        // return{-1,-1};

        int n=nums.size();
        unordered_map<int,int>mp;
      

       for(int i=0; i<n; i++){
        int req = target - nums[i];

        if(mp.count(req)){
            return{i,mp[req]};
        }
        mp[nums[i]] = i;
       }
       return {-1,-1};

//Brute force approach
        // int n= nums.size();
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<n; j++){
        //         if(i == j) continue;
        //         if(nums[i]+nums[j] == target){
        //            return {i, j};
        //         }
        //     }
        // }
        // return {};
    }
};