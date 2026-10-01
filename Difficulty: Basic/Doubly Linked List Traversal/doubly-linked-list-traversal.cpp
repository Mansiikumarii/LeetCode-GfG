/* Structure of doubly linked list Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};*/
class Solution {
  public:
    vector<vector<int>> displayList(Node *head) {
        // code here
        vector<int> forward;
        vector<int> backward;
        
        Node* p = head;
        Node* last = NULL;
        
        // Forward traverse
        while(p != NULL){
            forward.push_back(p->data);
            last = p;
            p=p->next;
        }
        //Backward traverse
        p = last;
        
        while(p != NULL){
            backward.push_back(p->data);
            p = p->prev;
        }
        return {forward, backward};
    }
};