# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def searchBST(self, root: Optional[TreeNode], key: int) -> Optional[TreeNode]:    
        curr = root
        if root == None:
            return None
        while curr != None :
            if curr.val == key:
                return curr
            elif key < curr.val :
                curr = curr.left
            else :
                curr = curr.right
            
