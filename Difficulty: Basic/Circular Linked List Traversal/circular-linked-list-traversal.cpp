/* Structure of circular linked list node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/

class Solution {
  public:
    void printList(Node* head) {
        // code here
        if(head == nullptr)
        return;
        Node* p = head;
        do{
        cout<< p->data <<" ";
        p = p->next;
        }
        while(p != head);
    }
};