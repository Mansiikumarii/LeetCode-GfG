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
 int maxDiameter = 0; // declare as class member

int height(struct TreeNode* node){
    if (node == NULL)
    return -1;

    int leftheight = height(node->left);
    int rightheight = height(node->right);
    maxDiameter = max(maxDiameter,leftheight+rightheight+2);

    return max(leftheight, rightheight)+1;
}
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return maxDiameter;
    }
};