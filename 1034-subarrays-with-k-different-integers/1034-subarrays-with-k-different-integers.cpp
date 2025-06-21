class Solution {
public:

int slidingWindow(vector<int>&nums,int k){
    int n= nums.size();
    int left =0, ans =0;
    unordered_map<int,int>mp;

    for(int right =0; right<n; right++){
        mp[nums[right]]++;
        while(mp.size() > k){
            mp[nums[left]]--;
            if(mp[nums[left]]==0)
            mp.erase(nums[left]);
            left++;
        }
        ans += right-left+1; //kyunki har sub array ko add karna hai 
    }
    return ans;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return slidingWindow(nums,k)-slidingWindow(nums,k-1);
    }
};