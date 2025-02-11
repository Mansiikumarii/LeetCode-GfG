class Solution {
public:
    int clumsy(int n) {
        int operation=0;
        stack<int> st;
        st.push(n);
        
        for(int i=n-1; i>=1; i--){
            //multiply
            if(operation==0){
                int x= st.top();
                st.pop();
                st.push(x*i);
            }
            //divide
            else if(operation == 1){
                int x=st.top();
                st.pop();
                st.push(x/i);
            }
            //add
            else if(operation==2){
                st.push(i);
            }
            //sub
            else{
                st.push(-i);
            }
            operation = (operation+1)%4;
        }
        int ans=0;
        while(!st.empty()){
            ans += st.top();
            st.pop();


        }
        return ans;
    }
};