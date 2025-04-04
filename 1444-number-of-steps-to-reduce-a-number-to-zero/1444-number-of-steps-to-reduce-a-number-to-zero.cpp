class Solution {
public:
    int numberOfSteps(int num) {
        int n=0;
        while(num>0){
            if(num%2){
                 num = num-1;
            n++;
            
        }
        else{
           num /=2;
            n++;
        }
        
        }
        return n;
        
    }
};