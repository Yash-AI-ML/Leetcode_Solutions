# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        slow = head
        fast = head
        l = 0
        c = 0
        if head == None or head.next == None:
            return None
        while fast and fast.next :
            slow = slow.next 
            fast = fast.next.next
            if slow == fast :
                c += 1
                break
        if c==0:
            return None
        while slow.next != fast:
            slow = slow.next 
            l += 1
        l += 1
        slow = slow.next
        slow = head
        fast = head
        for i in range(l):
            fast = fast.next 
        while slow!= fast:
            slow = slow.next
            fast = fast.next
        return slow