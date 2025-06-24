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
        // ListNode *slow = head;
        // ListNode *fast = head;
        // while(fast and fast->next){ //or nahi likheneg bcz null ka next error dega
        //     slow = slow->next;
        //     fast = fast->next->next;
        //     if(slow == fast ) break; //linked ke andar cycle hai
        // }
        // if(fast == NULL or fast->next == NULL) return NULL; //cycle nahi hai
        // //yahan or hai agar dono main koi ek null hoga toh condistion true hogi
        // slow = head; // slow pointer ko starting pe le ao
        // //ek ek step se padhao
        // while(slow != fast){
        //     slow = slow->next;
        //     fast = fast->next;
        // }
        // return slow;

        // //Linked List Cycle 2 proof

     ListNode* slow = head;
     ListNode* fast = head;

     while(fast && fast->next){
        slow= slow->next;
        fast = fast->next->next;

        if(fast== slow) break;
     }

     if(fast == nullptr || fast->next == nullptr) return nullptr;
     fast = head;

     while(fast != slow){
        slow= slow->next;
        fast = fast->next;
     }
return fast;






    }
};