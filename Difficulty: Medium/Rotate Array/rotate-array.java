import java.util.Arrays;
class Solution {
    public void rotateArr(int arr[], int d) {
        // code here
        if(arr == null || arr.length ==0)
        return;
        
        int n = arr.length;
        d = d%n;
        reverse(arr,0,d-1);
        reverse(arr, d, n-1);
        reverse(arr, 0,n-1);
    }
    public static void reverse(int[] arr, int start, int end){
        while(start<end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            
            start++;
            end--;
        }
    }
}