class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // Create a dummy node to simplify edge case handling
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr) {
            if (curr->val == val) {
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }

        head = dummy->next;
        delete dummy; // clean up dummy node
        return head;

        


    }
};
