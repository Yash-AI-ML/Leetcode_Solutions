/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int numComponents(struct ListNode* head, int* nums, int numsSize) {
    bool *inset = calloc(10000, sizeof(bool));
    for(int i=0; i<numsSize; i++){
        inset[nums[i]] = true;
    }
    int count = 0;
    while(head){
        if(inset[head->val] && (!head->next || !inset[head->next->val]))
        count ++;
        head = head -> next;
    }
    free(inset);
    return count;    
}