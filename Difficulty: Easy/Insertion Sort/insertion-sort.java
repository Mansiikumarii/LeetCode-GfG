class Solution {
    // Please change the array in-place
    public void insertionSort(int arr[]) {
        // code here
        for(int i=1;i<arr.length;i++){
            int temp = arr[i];
            int j=i;
            while(j>0 && arr[j-1]>temp){
                arr[j] = arr[j-1];
                j=j-1;
            }
            arr[j]=temp;
        }
    }
}