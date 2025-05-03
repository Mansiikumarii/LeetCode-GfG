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
ListNode *solve(ListNode *head, int cnt, int k){
    if(head == NULL or head->next == NULL) return head;
    if(cnt<k) return head;
    int a=0;
    ListNode *prev = NULL;
    ListNode *curr = head;
    while(curr != NULL && a < k){

        ListNode *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        a++;
    }
    head->next = solve(curr,cnt-k,k);
    return prev;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        int cnt =0;
        ListNode *curr = head;
        while(curr){
            curr = curr->next;
            cnt++;
        }
        return solve(head,cnt,k);
    }
};