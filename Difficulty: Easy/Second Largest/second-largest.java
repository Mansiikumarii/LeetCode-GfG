class Solution {
    public int getSecondLargest(int[] arr) {
        // code here
        int n= arr.length;
        int largest = -1, secondLargest = -1;
        for(int i=0; i<n; i++){
            if(arr[i]>largest)
                largest = arr[i];
        }
        for(int i=0; i<n; i++){
            if(arr[i]>secondLargest && arr[i] != largest)
            secondLargest = arr[i];
        }
        return secondLargest;
    }
}