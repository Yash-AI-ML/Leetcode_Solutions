import random

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:

    def __init__(self, head: Optional[ListNode]):
        # Store the head of the linked list
        self.head = head

    def getRandom(self) -> int:
        chosen_value = self.head.val
        current = self.head
        i = 1
        
        while current:
            # Generate a random number between 1 and i
            if random.randint(1, i) == 1:
                chosen_value = current.val
            current = current.next
            i += 1
            
        return chosen_value

        


# Your Solution object will be instantiated and called as such:
# obj = Solution(head)
# param_1 = obj.getRandom()