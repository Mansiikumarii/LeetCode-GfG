#include<cmath>
class Solution {
public:
    bool judgeSquareSum(int c) {
        long a=0;
        int b= static_cast<long>(std::sqrt(c));
        while(a<=b){
            long long t=a*a+b*b;
            if(t==c){
                return true;
            }
            else if(t<c){
                a++;
            }
            else{
                b--;
            }

        }
        return false;
    }
};