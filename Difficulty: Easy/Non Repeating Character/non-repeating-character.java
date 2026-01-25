class Solution {
    static final int MAX_CHAR = 26;
    public char nonRepeatingChar(String s) {
        // code here
        int[] vis = new int[MAX_CHAR];
        Arrays.fill(vis,-1);
        
        for(int i=0; i<s.length();i++){
            int index = s.charAt(i)-'a';
            if(vis[index] == -1){
                vis[index] = i;
            }
            else{
                vis[index] = -2;
            }
        }
        int idx = -1;
        for(int i=0; i<MAX_CHAR;i++){
            if(vis[i]>=0 &&(idx == -1 || vis[i]<vis[idx] ))
            idx = i;
        }
        return (idx == -1)? '$': s.charAt(vis[idx]);
    }
}
