/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        Node* first = head, *second = head;
        int c=0;
        while(first){
            first = first->next;
            c++;
            if(c>k){
                second = second->next;
            }
        }
        if(c<k)
        return -1;
        return second->data;
    }
};