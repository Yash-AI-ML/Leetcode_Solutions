# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        curr = head 
        length = 0
        if  head.next == None :
            return None 
        if  head.next.next == None:
            head.next = None
            return head
        while curr != None :
            curr = curr.next
            length += 1
        curr = head
        for i in range((length//2 )-1):
            curr = curr.next
        curr.next = curr.next.next
        return head
        