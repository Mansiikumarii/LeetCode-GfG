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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        ListNode* tail = head;
        int length = 1;

        while(tail->next){
            tail = tail->next;
            length++;
        }
         k = k%length;
        if(k ==0) return head;

        ListNode* temp = head;
        for(int i=0; i<length-k-1;i++ ){
            temp = temp->next;
        }
        ListNode* newHead = temp->next;
        temp->next = nullptr;
        tail->next = head;

        return newHead;
    }
};