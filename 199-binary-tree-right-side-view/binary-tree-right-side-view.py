# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import deque
from typing import Optional, List

class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        if root is None:
            return []

        result = []
        queue = deque([root]) # Queue for BFS

        while queue:
            level_size = len(queue)

            # Process all nodes of this level
            for i in range(level_size):
                node = queue.popleft()

                # If this is the last node in the current level, it's visible from the right
                if i == level_size - 1:
                    result.append(node.val)

                # Add left child to queue
                if node.left:
                    queue.append(node.left)

                # Add right child to queue
                if node.right:
                    queue.append(node.right)

        return result
