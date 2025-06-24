/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt =0;
        ListNode* temp = head;

        // Count total number of nodes
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        if(cnt == n){
         ListNode* newHead = head->next;
          
            return newHead;
        }

         // Find the (cnt - n)th node
        int res = cnt - n;
        temp = head;
        while(--res>0){
           
            temp = temp->next;

    }
      // Delete the node
    ListNode* delNode = temp->next;
   
    temp->next = temp->next->next;
    delete delNode;
    return head;
    }  
};