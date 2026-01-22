// User function Template for Java

class Sol {
    Boolean balancedNumber(String N) {
        // your code here
        int len = N.length();
        int mid = len/2;
        if(len % 2 == 0)
        return false;
        
            int l =0, r=0;
            for (int i=0; i<mid; i++){
                l += N.charAt(i)-'0';
            }
            for(int j=mid+1; j<len; j++){
                r += N.charAt(j) - '0';
            }
            return l == r;
    }
}