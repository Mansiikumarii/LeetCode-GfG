class Solution {
    public static String encode(String s) {
        // code here
        int n= s.length();
        StringBuilder ans = new StringBuilder();
        for(int i=0; i<n;i++){
            int count = 1;
            while(i<n-1 && s.charAt(i)==s.charAt(i+1)){
                count++;
                i++;
            }
            ans.append(s.charAt(i)).append(count);
        }
       return ans.toString(); 
    }
}