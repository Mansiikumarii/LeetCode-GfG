class Solution {
public:
    int fib(int n) {
        //Itrative
    //   if(n<0){
    //     return n;
    //   }
    //   if(n==0){
    //     return 0;
    //   }  
    //   int a=0, b=1;
    //   for(int i=2; i<=n;i++){
    //     int nextTerm = a+b;
    //     a=b;
    //     b=nextTerm;
    //   }
    //   return b;

 if(n==0) return 0;
 if(n==1) return 1;
 return fib(n-1)+ fib(n-2) ;

// if(n==0) return 0;
//    if(n==1) return 1;
//    int prevprev =0;
//    int prev = 1;
//    int ans;

//    for(int i=2;i<=n; i++ ){
//     ans = prevprev+prev;
//     prevprev = prev;
//     prev= ans;
//        }

// return ans;

    }
};