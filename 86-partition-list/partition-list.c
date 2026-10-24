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
    while(head != NULL){
        if(head->val < x){
            smalltail->next = head;
            head = head->next;
            smalltail = smalltail->next;
        }
        else{
            largetail ->next = head;
            head = head->next;
            largetail = largetail ->next;
        }    
    }
    largetail->next = NULL;
    smalltail->next = large->next;
    return small->next;
}