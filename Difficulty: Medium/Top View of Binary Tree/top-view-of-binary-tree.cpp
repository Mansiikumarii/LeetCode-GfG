/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
  public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root) {
        // code here
        vector<int>ans;
        
        queue<pair<Node*, int>>q;
        map<int,int>mp;
        q.push({root,0});
        
        while(!q.empty()){
            Node* u = q.front().first;
            int pos = q.front().second;
             q.pop();
             if(!mp.count(pos)){
            mp[pos] = u->data;
        }
        if(u->left)
        q.push({u->left, pos-1});
        if(u->right)
        q.push({u->right,pos+1 });
        
    
        }
        for(auto x: mp){
        ans.push_back(x.second);
    }
        return ans;
        
    }
    
};