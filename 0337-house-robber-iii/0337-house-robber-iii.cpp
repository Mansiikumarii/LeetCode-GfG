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
vector<int>recursion(TreeNode* root){
    if(!root) return{0,0};

    vector<int>left(2,0), right(2,0); //left right ke liye 2 size ka
    left = recursion(root->left);
    right = recursion(root->right);
    vector<int>curr(2,0);
    curr[0] = max(left[0], left[1])+ max(right[0], right[1]);
    curr[1] = root->val+ right[0]+ left[0];

    return curr;
}
    int rob(TreeNode* root) {
        //0 ka matlb hai no robbed
        //1 ka matlab robbed

        vector<int>dp(2,0);

        dp = recursion(root);

        return max(dp[0], dp[1]); //nahi chori and chori
    }
};