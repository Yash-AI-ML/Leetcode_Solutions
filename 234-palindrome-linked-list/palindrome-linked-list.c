/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    if (head== NULL || head->next == NULL){
        return true;
    }
    struct ListNode * slow = head;
    struct ListNode * fast = head->next;
    while (fast!= NULL && fast->next!= NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    struct ListNode *prev = NULL;
    struct ListNode *nxt = NULL;
    struct ListNode *curr = slow->next;
    while(curr!= NULL){
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    struct ListNode * temp1 = head;
    struct ListNode * temp2 = prev;
    while (temp2!=NULL){
        if(temp1->val!= temp2->val){
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return true;

}