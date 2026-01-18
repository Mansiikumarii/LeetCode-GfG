class Solution {
    public int binarysearch(int[] arr, int k) {
        // Code Here
        int low =0, high = arr.length -1;
         int result = -1;
        while(low <= high){
            int mid = low+(high-low)/2;
           
            if(arr[mid] == k){
            result = mid;
            high = mid-1;
            }
            else if (arr[mid] < k)
            low = mid+1;
            
            else
            high = mid-1;
        }
        return result;
    }
}