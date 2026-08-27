class Solution {
    static int sumOfDigits(int n) {
        // code here
        int sum=0;
        int temp = Math.abs(n);
        while(temp >0){
            sum = sum + temp%10;
            temp = temp/10;
        }
        return sum;
    }
}
