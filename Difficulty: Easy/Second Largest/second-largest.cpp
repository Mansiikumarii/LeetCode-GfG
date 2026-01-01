class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        if(arr.size()<2)
        return -1;
        
        int largest =-1, secondLargest = -1;
        
        for(int i=0;i<arr.size(); i++){
            if(arr[i]>largest){
                secondLargest = largest;
                largest = arr[i];
            }
            else if(arr[i]<largest && arr[i]>secondLargest)
            secondLargest = arr[i];
        }
        return secondLargest;
    }
    
};