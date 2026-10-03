struct ListNode* swapPairs(struct ListNode* head) {
    // 1. Handle base cases: empty list or single node
    if (head == NULL || head->next == NULL) {
        return head;
    }
    
    // 2. Initialize a dummy node to easily track the new head
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode* prev = &dummy;
    
    // 3. Loop through pairs as long as two adjacent nodes exist
    while (prev->next != NULL && prev->next->next != NULL) {
        struct ListNode* first = prev->next;
        struct ListNode* second = first->next;
        
        // Rearrange pointers to swap the nodes
        first->next = second->next;
        second->next = first;
        prev->next = second;
        
        // Move prev two nodes forward (which is now the 'first' node)
        prev = first;
    }
    
    return dummy.next;
}
