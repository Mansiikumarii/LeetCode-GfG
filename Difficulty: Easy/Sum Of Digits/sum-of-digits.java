class Solution {
    static int sumOfDigits(int n) {
        // code here
        int sum =0;
        while(n != 0){
            int last = n%10;
            sum += last;
            n = n/10;
        }
        return sum;
    }
}
