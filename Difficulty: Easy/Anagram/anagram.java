class Solution {
    public static boolean areAnagrams(String s1, String s2) {
        // code here
        if (s1.length() != s2.length())
        return false;
        
        HashMap<Character,Integer> charCount = new HashMap<>();
        
        for(char ch : s1.toCharArray()){
            charCount.put(ch, charCount.getOrDefault(ch,0)+1);
        }
        
        for(char ch : s2.toCharArray()){
            charCount.put(ch,charCount.getOrDefault(ch,0)-1);
        }
        
        for(var pair : charCount.entrySet()){
            if(pair.getValue() != 0)
            return false;
        }
       return true;  
    }
    
}