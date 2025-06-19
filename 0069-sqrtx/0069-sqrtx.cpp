class Solution {
public:
    int mySqrt(int x) {
    //   int low =0;
    //   int high = x;
    //   int ans =-1;

    //   while(low<= high){
    //     long long mid= low+(high-low)/2;

    //     if(mid*mid == x) return mid;

    //     else if(mid*mid > x){
    //         high = mid -1;
    //     }
    //     else{
    //         low = mid +1;
    //         ans = mid;
    //     }
    //   }  
    //   return ans;
    // }

    
        if (x == 0) return 0;
        long long guess = x;
        while (guess * guess > x) {
            guess = (guess + x / guess) / 2;
        }
        return guess;
    }
};