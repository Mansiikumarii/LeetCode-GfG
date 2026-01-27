import java.util.*;

class Solution {
    public static String countSort(String s) {
        // 1. Create a frequency array for 26 lowercase letters
        int[] count = new int[26];
        
        // 2. Count occurrences of each character
        for (int i = 0; i < s.length(); i++) {
            count[s.charAt(i) - 'a']++;
        }
        
        // 3. Reconstruct the string using a StringBuilder
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < 26; i++) {
            while (count[i] > 0) {
                sb.append((char) (i + 'a'));
                count[i]--;
            }
        }
        
        return sb.toString();
    }
}