class Solution {
public:

bool possible(vector<int>&weights, int limit, int days){
    int sum=0;
    int timetaken =0;
    int n= weights.size();
    for(int i=0; i<n; i++){
        if(sum + weights[i] > limit ){
            timetaken++;
            sum =0;
        }
        sum += weights[i];
    }
    return timetaken + 1 <= days;
}
    int shipWithinDays(vector<int>& weights, int days) {
       int low = *max_element(weights.begin(),weights.end()); 
       //max_element ek pointer return karta hai toh use dereference karna parta hai isliye * lagate hai

       int high = accumulate(weights.begin(), weights.end(), 0); 
       // 0 bcz kisme add karna hai ek start value deni hoti hai

       int ans =-1;
       while(low<=high){
        int mid = low+(high-low)/2;

        if(possible(weights,mid,days)){
            high = mid-1;
            ans = mid;
        }
        else{
            low = mid+1;
        }
       } 
       return ans;
    }
};