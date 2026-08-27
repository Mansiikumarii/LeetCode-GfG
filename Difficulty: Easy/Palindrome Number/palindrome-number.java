class Solution {
    public boolean isPalindrome(int n) {
        // code here
       int temp = Math.abs(n);
        int revNum = 0;
        
        while(temp >0){
            int rem = temp%10;
            revNum = (revNum * 10) + rem;
            temp = temp/10;
        }
        return Math.abs(n) == revNum;
    }
}