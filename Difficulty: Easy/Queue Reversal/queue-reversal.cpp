// function Template for C++

class Solution {
  public:
    queue<int> reverseQueue(queue<int> &q) {
        // code here.
        
        stack<int>st;
        while(!q.empty()){
            int element = q.front();
            q.pop();
            st.push(element);
        }
        while(!st.empty()){
            int element = st.top();
            st.pop();
            q.push(element);
        }
        return q;
    }
};