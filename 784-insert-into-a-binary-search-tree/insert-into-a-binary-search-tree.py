# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def insertIntoBST(self, root: Optional[TreeNode], key: int) -> Optional[TreeNode]:
        newnode = TreeNode(key)
        if root == None:
            return newnode
            
        curr = root
        while curr!= None :#left
            if key < curr.val:
                if curr.left != None:
                    curr = curr.left
                else :
                    curr.left = newnode
                    break
            else :#Right
                if key > curr.val:
                    if curr.right != None:
                       curr = curr.right
                    else :
                       curr.right = newnode
                       break
        return root