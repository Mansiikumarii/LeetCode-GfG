// User function Template for Java

class Solution {
    static boolean isLeap(int N) {
        // code here
      return (N%400==0) ||(N%4 == 0 && N%100 != 0); 
    }
}