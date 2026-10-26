/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    struct ListNode dummy = {0,head};
    struct ListNode *before = &dummy;
    for(int i=1; i<left; i++) before = before -> next;
    struct ListNode *first = before->next;
    for(int i=0; i<=right-left-1; i++){ 
        // used r-l-1 cz first will be at right place after r-l-1 iteration so no need for right-left no of iterations

        struct ListNode *moved = first->next;
        first->next = first->next->next;
        moved->next = before->next;
        before->next = moved;
    }
    return dummy.next;

}