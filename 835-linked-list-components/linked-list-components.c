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
    for(struct ListNode* curr = head; curr!= NULL; curr= curr->next){
        if(inset[curr->val] && (!curr->next || !inset[curr->next->val]))
        count ++;
    }
    free(inset);
    return count;    
}