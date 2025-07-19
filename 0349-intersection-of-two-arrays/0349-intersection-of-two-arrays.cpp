class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0; i<nums1.size(); i++){
            int element = nums1[i];
            for(int j=0; j<nums2.size(); j++){
                if(element == nums2[j]){
                    if(find(ans.begin(), ans.end(), element) == ans.end())
                        ans.push_back(element);
                        //checking if element is not already in the ans vector before adding it
                    nums2[j] = INT_MIN;
                    break;
                }
            }
        }
        return ans;
    }
};