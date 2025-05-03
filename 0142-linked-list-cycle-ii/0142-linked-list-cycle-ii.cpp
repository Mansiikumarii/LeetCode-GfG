/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast and fast->next){ //or nahi likheneg bcz null ka next error dega
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast ) break; //linked ke andar cycle hai
        }
        if(fast == NULL or fast->next == NULL) return NULL; //cycle nahi hai
        slow = head;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};