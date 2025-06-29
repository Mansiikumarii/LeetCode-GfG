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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        // vector<vector<int>> ans;
        // if (root == NULL) return ans;
        
        // queue<TreeNode*> q;
        // q.push(root);
        // bool flag = true; // true: left to right, false: right to left
        
        // while (!q.empty()) {
        //     int size = q.size();
        //     vector<int> temp;
        //     for (int i = 0; i < size; ++i) {
        //         TreeNode* node = q.front();
        //         q.pop();
        //         temp.push_back(node->val);
        //         if (node->left) q.push(node->left);
        //         if (node->right) q.push(node->right);
        //     }
        //     if (!flag) {
        //         reverse(temp.begin(), temp.end());
        //     }
        //     ans.push_back(temp);
        //     flag = !flag; // Toggle the direction
        // }
        // return ans;

// vector<vector<int>> result;
// if(root == NULL)
// return result;
// bool LeftToRight = true;

// queue<TreeNode *>q;
// q.push(root);
// while(!q.empty()){
//     int size= q.size();
//     vector<int> row(size);
//     for(int i=0; i<size; i++){
//         TreeNode* node = q.front();
//         q.pop();

//         int index = LeftToRight? i: size-1-i;
//         row[index] = node->val;
//         if(node->left)
//         q.push(node->left);
//         if(node->right)
//         q.push(node->right);

//     }
//     LeftToRight = !LeftToRight;
//     result.push_back(row);
// }
// return result;

 vector<vector<int>>ans;
        if(!root) return ans;
 
        queue<TreeNode*>q;
        q.push(root);
 
        while(!q.empty()){
            int n = q.size();
            vector<int>temp;
 
            for(int i = 0; i < n; i++){
 
                TreeNode* u = q.front();
                temp.push_back(u->val);
                q.pop();
 
                if(u->left) q.push(u->left);
                if(u->right) q.push(u->right);
            }
            ans.push_back(temp);
        }
 
        for(int i = 0; i < ans.size(); i++){
            if(i % 2 != 0) reverse(ans[i].begin(), ans[i].end());
        }
        return ans;
        
    }
};
