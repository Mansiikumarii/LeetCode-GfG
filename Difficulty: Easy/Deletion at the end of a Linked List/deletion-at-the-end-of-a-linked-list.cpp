/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* removeLastNode(Node* head) {
        // code here
        if(head == NULL)
        return head;
        
        if(head->next == NULL)
        return NULL;
        
        Node* p= NULL, *q = head;
        while(q->next != NULL){
            p=q;
            q = q->next;
        }
        p->next= NULL;
        free(q);
        return head;
    }
};