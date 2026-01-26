// User function Template for Java

class Solution {
    public String removeConsecutiveCharacter(String s) {
        // code here
        int n = s.length();
        StringBuilder str = new StringBuilder();
        
        if(n==0)
        return str.toString();
        for(int i=0; i<n-1; i++){
            if(s.charAt(i) != s.charAt(i+1)){
                str.append(s.charAt(i));
            }
        }
        //kyunki last walla char nahi gaya
        str.append(s.charAt(n-1));
        return str.toString();
    }
}