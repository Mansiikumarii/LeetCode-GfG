class Solution {
public:
    bool isPalindrome(int x) {
      if (x<0){
        return false;
      }
      int x1 = x;
      long reverse;
      while(x !=0){
        int digit = x%10;//121%10=1
        reverse = reverse*10+ digit;//
        x=x/10;
      }
      return x1==reverse;
    }
        
    
};