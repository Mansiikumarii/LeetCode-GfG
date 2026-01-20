class Solution {
    public boolean isPalindrome(int n) {
        // code here
        int revNum =0;
        int temp = Math.abs(n);
        while (temp != 0){
            revNum = revNum *10 + temp%10;
            temp = temp/10;
        }
        if(revNum == n)
        return true;
        else
        return false;
    }
}