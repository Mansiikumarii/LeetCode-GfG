class Solution {
    public static int largest(int[] arr) {
        // code here
        if(arr == null || arr.length ==0)
        return -1;
        
        int max = arr[0];
        int n= arr.length;
        for(int i=1; i<n;i++){
            if(arr[i]>max)
            max = arr[i];
        }
        return max;
    }
}
