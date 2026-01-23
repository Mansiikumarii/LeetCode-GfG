class Solution {
    public void reverse(int[] arr,int start,int end){
        
        while(start<end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end]=temp;
            
            start++;
            end--;
        }
    }
    public void reverseArray(int arr[]) {
        
        
        int start = 0, end = arr.length-1;
        
        // code here
        reverse(arr,start,end);
    }
}