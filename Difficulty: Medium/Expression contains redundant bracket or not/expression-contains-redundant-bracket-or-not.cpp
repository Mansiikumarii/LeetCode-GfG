class Solution {
  public:
    bool checkRedundancy(string &s) {
        // code here
        stack<char>st;
        for(int i=0; i<s.size(); i++){
            char ch = s[i];
            if((ch=='(')|| (ch=='+') || (ch=='-')|| (ch=='*')|| (ch=='/')){
                st.push(ch);
            }
            else if(ch==')'){
                    bool isRedundant = true;
                    while(!st.empty() && st.top() != '('){
                        char top = st.top();
                        if(top== '+' || top== '-' || top== '*' || top=='/'){
                            isRedundant = false;
                        }
                        st.pop();
                    }
                    if(!st.empty()) st.pop();
                    if (isRedundant) return true;  // Redundant bracket found
                }
            }
            return false;  // No redundant brackets found
        
    }
};
