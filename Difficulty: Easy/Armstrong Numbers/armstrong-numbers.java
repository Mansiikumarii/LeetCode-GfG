class Solution {
    static boolean armstrongNumber(int n) {
        // code here
        int digit =0;
        int sum =0;
        int originalNum = n;
        
        int temp = n;
        while(temp>0){
            temp = temp/10;
            digit++;
        }
        
        temp = n;
        //find sum
        while(temp>0){
            int LastDigit = temp%10;
            sum  = sum+(int) Math.pow(LastDigit, digit);
            temp = temp/10;
        }
        return sum == originalNum;
    }
}