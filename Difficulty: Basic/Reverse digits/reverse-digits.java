// User function Template for Java

class Solution {
    public int reverseDigits(int n) {
        // Code here
        int revNum=0;
        while(n>0){
            revNum = revNum*10 + n%10;
            n=n/10;
        }
        return revNum;
    }
}