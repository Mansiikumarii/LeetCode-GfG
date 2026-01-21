// User function Template for Java
class Solution {
    int countWords(String s) {
        // code here
        if(s == null || s.isEmpty())
            return 0;
        s = s.replace("\\n" , " ");
        s = s.replace("\\t" , " ");
        int count =0;
        boolean isWord = false;
        
        for(int i=0; i<s.length(); i++){
            char ch = s.charAt(i);
            
            if(Character.isWhitespace(ch)){
                isWord = false;
            }
            else{
                if(!isWord){
                    count++;
                    isWord = true;
                }
            }
        }
        return count;
    }
}