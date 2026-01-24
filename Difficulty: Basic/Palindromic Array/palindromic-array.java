/*Complete the Function below*/
class Solution {
    public static boolean isPalinArray(int num){
           int original = num ;
           int rev =0;
           while(num>0){
               rev = rev *10 + num%10;
               num /= 10;
           }
           return original == rev;
    }
    public static boolean isPalinArray(int[] arr) {
        // add code here.
        for(int num:arr){
            if(!isPalinArray(num)){
                return false;
            }
        }
        return true;
    }
}