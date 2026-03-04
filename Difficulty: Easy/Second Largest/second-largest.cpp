class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
         int largest = INT_MIN;
        int secondLargest = INT_MIN;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>largest){
                secondLargest = largest;
                largest = arr[i];
            }
            
            else if(arr[i]>secondLargest && arr[i]<largest)
            secondLargest = arr[i];
        }
         if(secondLargest == INT_MIN)
            return -1;
        return secondLargest;
    }
};