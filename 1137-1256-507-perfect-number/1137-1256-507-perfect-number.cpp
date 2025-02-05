class Solution {
public:
    bool checkPerfectNumber(int num) {
     int div,sum=0;
     for(int i=1; i<num;i++ ){
        div = num%i;
        if(div == 0)
        sum += i;
     }   
     if(sum == num){
        return true;
     }
     else{
        return false;
     }
    }
};