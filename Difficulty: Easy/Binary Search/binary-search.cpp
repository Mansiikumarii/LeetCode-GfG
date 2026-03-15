class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int s=0, end = arr.size()-1;
        int ans = -1;
        while(s<=end){
            int mid =s+ (end-s)/2;
            if(arr[mid] == k){
                ans = mid;
                end = mid-1;
            }
            
            
            else if(arr[mid]<k)
            s=mid+1;
            
            else
            end = mid-1;}
            return ans;
    }
};