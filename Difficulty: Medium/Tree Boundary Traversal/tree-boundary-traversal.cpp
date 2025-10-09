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
  void traversalLeft(Node* root, vector<int>&ans){
   if(root ==NULL)
   return;
   if(root->left == NULL && root->right == NULL)
       return;
   
   
   ans.push_back(root->data);
   
   if(root->left){
       traversalLeft(root->left,ans);
   }
   else
   traversalLeft(root->right,ans);
   
  }
  
  void traversalLeaf(Node* root , vector<int>&ans){
      //base case
      if(root == NULL)
      return;
      
      if(root->left == NULL && root->right == NULL){
          ans.push_back(root->data);
          return;
      }
      traversalLeaf(root->left, ans);
      traversalLeaf(root->right, ans);
  }
  
  void traverseRight(Node *root, vector<int>&ans){
      if((root == NULL) || (root->left == NULL && root->right ==NULL))
      return;
      
      if(root->right)
      traverseRight(root->right,ans);
      else
      traverseRight(root->left,ans);
      
      //wapis jao
      ans.push_back(root->data);
  }
    vector<int> boundaryTraversal(Node *root) {
        // code here
      vector<int>ans;
      if(root == NULL)
      return ans;
      
      ans.push_back(root->data);
      
      //left part store karana hai
      traversalLeft(root->left,ans);
      
      //traverse leaf node
      
      //left subtree
      traversalLeaf(root->left, ans);
      //right subtree
      traversalLeaf(root->right, ans);
      
      //traverse karo right walla part
      traverseRight(root->right,ans);
      
      return ans;
      
    }
    
};