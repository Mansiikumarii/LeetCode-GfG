// User function Template for Java
class Solution {
    
    public static int power(int x, int y){
        if(y ==0)
        return 1;
        
        if(y%2 ==0)
        return power(x,y/2)*power(x,y/2);
        return x*power(x,y/2)*power(x,y/2);
        
    }
    public static int order(int n){
        int t=0;
        while(n != 0){
            t ++;
            n= n/10;
        }
        return t;
    }
    static boolean armstrongNumber(int n) {
        // code here
        int x = order(n);
        int temp = n, sum =0;
        
        while(temp != 0){
            int r = temp % 10;
            sum += power(r,x);
            temp = temp/10;
        }
        return sum ==n;
    }
}