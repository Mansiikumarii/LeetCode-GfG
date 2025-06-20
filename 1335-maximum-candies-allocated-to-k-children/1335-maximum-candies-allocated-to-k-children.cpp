class Solution {
public:
bool possible(vector<int>&candies, long long candiesReq , long long k){
    long long childern = 0;
    int n= candies.size();
    for(int i=0; i<n; i++){
        childern += candies[i] / candiesReq;
    }
    return childern >= k;
}
    int maximumCandies(vector<int>& candies, long long k) {
        int low =1;
        int high = *max_element(candies.begin(), candies.end());
        long long ans = 0;

        while(low<= high){
            long long mid = low+(high -low)/2;

            if(possible(candies, mid, k)){
                low = mid+1;
                ans = mid;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }
};