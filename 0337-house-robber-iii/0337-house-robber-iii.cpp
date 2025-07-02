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

//  if(!root) return{0,0};

//     vector<int>left(2,0), right(2,0); //left right ke liye 2 size ka
//     left = recursion(root->left);
//     right = recursion(root->right);
//     vector<int>curr(2,0);
//     curr[0] = max(left[0], left[1])+ max(right[0], right[1]);
//     curr[1] = root->val+ right[0]+ left[0];

//     return curr;
// }
//     int rob(TreeNode* root) {
//         //0 ka matlb hai no robbed
//         //1 ka matlab robbed

//         vector<int>dp(2,0);

//         dp = recursion(root);

//         return max(dp[0], dp[1]); //nahi chori and chori

vector<int> travel(TreeNode* root){
     if(root == NULL) return {0,0};
     vector<int>left = travel(root->left);
    vector<int>right = travel(root->right);
    vector<int>options(2,0);
    options[0] = root->val + left[1] + right[1]; 
    //left[1]: the maximum amount from the left subtree if left is NOT robbed
    //right[1]: same for right subtree
    //So the total money = root->val + money from not robbing left + not robbing right
    options[1] = max(left[0], left[1])+ max(right[0],right[1]); //result[1] → Max money if you don't rob this node
    return options; 
}
    int rob(TreeNode* root) {
       vector<int> result = travel(root); 
       return max(result[0],result[1]);

    }
};