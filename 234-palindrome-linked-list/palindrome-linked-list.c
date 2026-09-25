/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    struct ListNode *temp = head;
    int n =0;
    while(temp != NULL){
        n++;
        temp = temp->next;
    }
    int arr[n];
    temp = head;
    for(int i =0;i<n;i++){
        arr[i] = temp -> val;
        temp = temp->next;
    }
    int st = 0 , end = n-1;
    while (st<=end){
        if(arr[st] != arr[end]){
            return false;
        }st++;
        end--;
    }
    return true;
}