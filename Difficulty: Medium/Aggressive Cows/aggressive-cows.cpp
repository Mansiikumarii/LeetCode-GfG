class Solution {
  public:
  
  bool possible(vector<int> &stalls, int max_space, int k){
      
      int prev = stalls[0];
      int cows = 1;
      int n = stalls.size();
      
      for(int i = 1; i < n; i++){
          
          if(stalls[i] - prev >= max_space){
              cows++;
              prev = stalls[i];
          }
          
      }
      
      return cows >= k;
      
  }
 
    int aggressiveCows(vector<int> &stalls, int k) {
 
        // Write your code here
        sort(stalls.begin(), stalls.end());
        
        int n = stalls.size();
        int low = 1, high = stalls[n - 1] - stalls[0];
        int ans = -1;
        
        while(low <= high){
            int mid = low + (high - low) / 2;
            
            if(possible(stalls, mid, k)){
                low = mid + 1;
                ans = mid;
            }else{
                high = mid - 1;
            }
        }
        
        return ans;
    }
};