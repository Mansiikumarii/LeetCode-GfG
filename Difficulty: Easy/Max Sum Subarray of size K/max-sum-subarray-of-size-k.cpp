class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int left =0;
        int ans =0, sum =0;
        int n= arr.size();
        
        for(int right=0; right <n; right++){
            sum += arr[right];
            if(right-left+1 == k){
                ans = max(ans,sum);
                
                sum -= arr[left];
                left++;
            }
        }
        return ans;
    }
};