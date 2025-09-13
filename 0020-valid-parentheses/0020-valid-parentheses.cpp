class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0; i<s.length(); i++){
            char ch= s[i];
            //if opening bracket 
            if(ch == '(' || ch== '{' || ch== '['){
                st.push(ch);
            }
            else{
                //for closing brackets
                //stack top check and pop
                if (st.empty()) return false;
                
                    char top = st.top();
                    st.pop();
                    if((ch == ')' && top!='(')|| (ch == '}' && top!='{')||
                    (ch == ']' && top!='[')){
                        return false;
                    }
    
            }
        }
        return st.empty();
    }
};