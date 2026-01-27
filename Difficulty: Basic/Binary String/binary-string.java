class Solution {
    public int binarySubstring(String s) {
        // code here
        int n = s.length();
        int one = 0;
        for(int i=0; i<n; i++){
            if(s.charAt(i) == '1')
            one++;
        }
        return (one*(one-1))/2;
    }
}