class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* slist = new ListNode(0, nullptr);
        ListNode* blist = new ListNode(0, nullptr);
 
        ListNode* small = slist;
        ListNode* big = blist;
 
        while(head != nullptr){
 
            if(head->val < x){
                ListNode* temp = new ListNode(head->val);
                small->next = temp;
                small = temp;
                
            }else{
                ListNode* temp = new ListNode(head->val);
                big->next = temp;
                big = big->next;
            }
 
            head = head->next;
        }
 
        small->next = blist->next;
 
        return slist->next;
        
    }
};