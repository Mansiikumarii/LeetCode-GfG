class Solution {
  public:
    int powMod(int x, int n, int M) {
        // code here
        long long res = 1;
        long long base = x%M;
        while(n>0){
            if(n&1){
                //odd
                res = (res*base)%M;
            }
            base = (base*base)%M;
            n = n>>1;
        }
        return (int)res;
        
    }
};