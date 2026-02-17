class Solution {
    public void reverseArray(int arr[]) {
        // code here
        int n= arr.length;
        int[] temp = new int[n];
        for(int i=0; i<n; i++){
            temp[i] = arr[n-i-1];
        }
        for(int i=0; i<n; i++){
            arr[i] = temp[i];
        }
    }
}