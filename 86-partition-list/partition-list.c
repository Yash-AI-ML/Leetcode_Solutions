/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* partition(struct ListNode* head, int x) {
    struct ListNode *small = malloc(sizeof(struct ListNode));
    struct ListNode *smalltail = small;
    struct ListNode *large = malloc(sizeof(struct ListNode));
    struct ListNode *largetail = large;
    struct ListNode *curr = head;
    while(curr != NULL){
        if(curr->val < x){
            smalltail->next = curr;
            curr = curr->next;
            smalltail = smalltail->next;
        }
        else{
            largetail ->next = curr;
            curr = curr->next;
            largetail = largetail ->next;
        }    
    }
    largetail->next = NULL;
    smalltail->next = large->next;
    return small->next;
}