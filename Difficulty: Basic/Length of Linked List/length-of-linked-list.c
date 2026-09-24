/*
Definition for Linked List
struct Node {
    int data;
    struct Node* next;
};
*/
int getCount(struct Node* head) {
    // code here
    int c = 0;
    while(head != NULL){
        c++;
        head = head->next;
    }
    return c;
}