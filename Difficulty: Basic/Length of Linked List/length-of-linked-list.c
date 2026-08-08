/*
Definition for Linked List
struct Node {
    int data;
    struct Node* next;
};
*/
int getCount(struct Node* head) {
    // code here
    int count=0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}