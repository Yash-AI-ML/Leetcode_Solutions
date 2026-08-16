# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import deque

class Solution:
    def levelOrder(self, root):
        # If tree is empty, return empty list
        if root is None:
            return []

        result = []

        # Queue for BFS
        queue = deque([root])

        while queue:

            # Number of nodes in the current level
            level_size = len(queue)

            current_level = []

            # Process all nodes of this level
            for _ in range(level_size):

                # Remove the first node from queue
                node = queue.popleft()

                # Add its value to current level
                current_level.append(node.val)

                # Add left child to queue
                if node.left:
                    queue.append(node.left)

                # Add right child to queue
                if node.right:
                    queue.append(node.right)

            # Add completed level to result
            result.append(current_level)

        return result