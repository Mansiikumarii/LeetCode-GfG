class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_set<int>seen;
        for(int i=0; i<nums1.size();i++){
            int element = nums1[i];
        for(int j=0; j<nums2.size();j++){
            if(element == nums2[j]){
                if(seen.find(element) ==seen.end()){
                ans.push_back(element);
                seen.insert(element);
                }
               break;
            }
        }

        }
        return ans;
    }
};