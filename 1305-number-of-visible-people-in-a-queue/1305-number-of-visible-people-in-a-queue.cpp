class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n= heights.size();
        vector<int>ans(n,0);

        stack<int>st;
        for(int i=n-1; i>=0; i--){
            int person = heights[i];
            int canSee = 0;

            while(!st.empty() && st.top()<=person){
                st.pop();
                canSee++;
            }
            if(!st.empty())
                 canSee++;
                 ans[i] = canSee;
            st.push(person);
        }
        return ans;
    }
};