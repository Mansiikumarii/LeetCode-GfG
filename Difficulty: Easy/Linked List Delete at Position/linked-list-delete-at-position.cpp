/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        if(x == 1)
        {
            Node* t = head;
            head = head->next;
            delete t;
            return head;
        }
        Node* prev = head;
        for(int i=1 ; i<x-1; i++)
        prev = prev->next;
        Node* t = prev->next;
        prev->next = t->next;
        delete t;
        return head;
    }
};