class Solution {
    public int countSubarrays(int[] nums) {
        int N = nums.length;
        int ans= 0;
        for(int i=0; i<N-2; i++){
            if(2*(nums[i]+nums[i+2])==nums[i+1])
            ans++;
        }
        return ans;
    }
}