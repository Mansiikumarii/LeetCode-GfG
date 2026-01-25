class Solution {
    public boolean isBalanced(String s) {
        // code here
        int top = -1;
        char[] stack = new char[s.length()];
        for(int i=0; i<s.length(); i++){
            char ch = s.charAt(i);
            if(ch=='(' || ch =='{' || ch == '['){
                stack[++top] = ch;
            }
            else{
                if(top == -1)
                return false;
                
                if((ch == ')' && stack[top]!='(')||
                (ch == '}' && stack[top] != '{') ||
                (ch == ']' && stack[top] !='[')
                )
                return false;
                top--;
            }
            
        }
        return top==-1;
    }
}
