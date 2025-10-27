class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
        stack<int>s;
        s.push(-1);
        int n= arr.size();
        vector<int>ans(n);
        
        for(int i=0;i<n;i++){
            int curr = arr[i];
            while(s.top()>= curr){
                s.pop();
            }
            ans[i]= s.top();
            s.push(curr);
        }
        return ans;
        
    }
};