/*
struct Node {
    int data;
    struct Node* next;
};*/
struct Node* deleteHead(struct Node* head) {
    // Code here
    struct Node * ptr = head;
    if(head == NULL)
    return head;
    
    head = head->next;
    ptr->next = NULL;
    free(ptr);
    return head;
}