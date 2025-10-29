/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  void traverseLeft(Node *root, vector<int>&ans){
      if(root == NULL)
      return;
      
      if(root->left == NULL && root->right == NULL){
          return;
      }
      ans.push_back(root->data);
      if(root->left)
      traverseLeft(root->left,ans);
      else
      traverseLeft(root->right,ans);
  }
  void traverseLeaf(Node* root, vector<int>& ans){
      if(root == NULL)
      return ;
      
      if(root->left == NULL && root->right == NULL){
          ans.push_back(root->data);
          return;
      }
      traverseLeaf(root->left,ans);
      traverseLeaf(root->right,ans);
  }
  
  void traverseRight(Node* root, vector<int>& ans){
      if(root == NULL)
      return;
      
      if(root->left == NULL && root->right == NULL){
          return;
      }
      if(root->right)
      traverseRight(root->right,ans);
      
      else
      traverseRight(root->left,ans);
      
      //bahar aa gaye
      ans.push_back(root->data);
      
  }
    vector<int> boundaryTraversal(Node *root) {
        vector<int>ans;
        if(root == NULL)
        return ans;
        
        ans.push_back(root->data);
    // 1. Left boundary (excluding leaves)
      traverseLeft(root->left, ans);
        traverseLeaf(root->left,ans);
        //right subtree
        traverseLeaf(root->right,ans);
        //traverse right part
        traverseRight(root->right,ans);
        return ans;
    }
};