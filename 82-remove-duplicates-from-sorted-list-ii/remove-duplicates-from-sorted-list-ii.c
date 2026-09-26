struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *dummy = malloc(sizeof(struct ListNode));

    if(head == NULL){
        return NULL;
    }

    dummy->next = head;

    struct ListNode *curr = dummy->next;
    struct ListNode *prev = dummy;

    while(curr != NULL){

        if(curr->next != NULL && curr->val == curr->next->val){

            while(curr->next != NULL && curr->val == curr->next->val){
                curr = curr->next;
            }

            prev->next = curr->next;
            curr = prev->next;

        } 
        else {
            prev = curr;
            curr = curr->next;
        }
    }

    return dummy->next;
}