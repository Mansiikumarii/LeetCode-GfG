class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        if (arr.empty()) return 0; // Edge case: empty array
        int max_sum = INT_MIN, sum =0;
        for(int i=0; i<arr.size(); i++){
            sum += arr[i];
            if(sum>max_sum)
            max_sum = sum;
            if(sum<0)
            sum=0;
        }
        return max_sum;
    }
};