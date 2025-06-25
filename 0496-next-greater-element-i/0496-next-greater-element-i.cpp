class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int>mp;
        stack<int>st;
        vector<int>ans;

        int n = nums2.size();

        for(int i = n - 1; i >= 0; i--){

            while(!st.empty() and st.top() < nums2[i]){
                st.pop();
            }

            if(!st.empty()) mp[nums2[i]] = st.top();

            st.push(nums2[i]);

        }

        for(auto x: nums1){
            if(mp.count(x)){

                ans.push_back(mp[x]);

            }else ans.push_back(-1);
        }

        return ans;
        
    }
};