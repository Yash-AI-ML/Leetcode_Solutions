/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    if(!head)return head;
    struct ListNode dummy = {2,head};
    struct ListNode *curr = &dummy;
    while(curr->next){
        if(curr->next->val == val){
            curr ->next = curr->next->next;
           }
           else{
           curr = curr->next;
           }
    }
    return dummy.next;
}