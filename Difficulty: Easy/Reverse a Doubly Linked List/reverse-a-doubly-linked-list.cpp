/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        Node* p = head;
        Node* q = head;
        while(p){
           q=p;
            swap(p->next, p->prev);
            p = p->prev;
        }
        head = q;
    }
};