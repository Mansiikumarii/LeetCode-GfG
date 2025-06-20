class Solution {
public:
int sumOfD(vector<int>&arr, int div){
    int sum =0;
    int n = arr.size();
    for(int i =0; i<n; i++){
        sum = sum +ceil((double)(arr[i])/(double)(div));

    }
    return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low =1, high = *max_element(nums.begin(), nums.end());
        while(low<=high){
            int mid = low + (high-low)/2;
            if(sumOfD(nums,mid) <= threshold){
               
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};