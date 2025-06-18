class Solution {
public:
    string largestOddNumber(string num) {
       int n= num.size();
       int j= n-1;

       while(j >= 0){
        int last_digit = num[j] -'0';
        if(last_digit % 2 ==0 ) j--;
        else{
            return num.substr(0,j+1);
        }
       } 
       return "";
    }
};