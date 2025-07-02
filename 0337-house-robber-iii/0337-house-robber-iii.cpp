/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
vector<int> travel(TreeNode* root){
     if(root == NULL) return {0,0};
     vector<int>left = travel(root->left);
    vector<int>right = travel(root->right);
    vector<int>options(2,0);
    options[0] = root->val + left[1] + right[1];
    options[1] = max(left[0], left[1])+ max(right[0],right[1]);
    return options; 
}
    int rob(TreeNode* root) {
       vector<int> result = travel(root); 
       return max(result[0],result[1]);

    }
};