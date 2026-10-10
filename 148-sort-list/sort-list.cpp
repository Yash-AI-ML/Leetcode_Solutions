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

ListNode *findmid(ListNode *head){
    ListNode *slow = head;
    ListNode *fast = head->next;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

ListNode *merge(ListNode *left, ListNode *right){
    if(left == NULL) return right;
    if(right == NULL) return left;
    
    ListNode dummy(-1); // Uses stack allocation to avoid memory leaks
    ListNode *temp = &dummy;
    
    while(left != NULL && right != NULL){
        if(left->val < right->val){
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else{
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
    if (left != NULL) temp->next = left;
    if (right != NULL) temp->next = right;
    
    return dummy.next;
}

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        // Base case
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        // Break Linkedlist into two halves after finding mid
        ListNode *mid = findmid(head);
        ListNode *left = head;
        ListNode *right = mid->next; 
        mid->next = NULL;
        
        // Recursive calls to sort both halves
        left = sortList(left);
        right = sortList(right);
        
        // Merge both left and right halves
        return merge(left, right);
    }
};
