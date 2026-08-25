class Solution:
    def deleteNode(self, root, key):

        # Key not found
        if root is None:
            return None

        # Search in left subtree
        if key < root.val:
            root.left = self.deleteNode(root.left, key)

        # Search in right subtree
        elif key > root.val:
            root.right = self.deleteNode(root.right, key)

        # Node found
        else:

            # Case 1: No left child
            if root.left is None:
                return root.right

            # Case 2: No right child
            if root.right is None:
                return root.left

            # Case 3: Two children
            # Find smallest node in right subtree
            curr = root.right

            while curr.left:
                curr = curr.left

            # Replace current node's value
            root.val = curr.val

            # Delete the duplicate node
            root.right = self.deleteNode(root.right, curr.val)

        return root