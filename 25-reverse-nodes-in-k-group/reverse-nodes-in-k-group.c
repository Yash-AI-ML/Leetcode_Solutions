/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    struct ListNode dummy = { 0,head };
    struct ListNode *before = &dummy;
    while(1){
        struct ListNode *check = before;
        for(int i=0; i<k && check!=NULL; i++)check=check->next;
        if(!check)break;
        
        struct ListNode *first = before->next;
        for(int i=1; i<k; i++){           
            struct ListNode *moved = first->next;
            first->next = moved->next;
            moved->next = before->next;
            before->next = moved;
        }
        before = first;
    }
    return dummy.next;
}