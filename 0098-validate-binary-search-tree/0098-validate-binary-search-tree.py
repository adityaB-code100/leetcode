# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def isValidBST(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: bool
        """
        def inorder(root, prev):
            if not root:
                return True
            
            if not inorder(root.left, prev):
                return False
            
            if root.val <= prev[0]:
                return False
            
            prev[0] = root.val
            
            return inorder(root.right, prev)
        
        return inorder(root, [float('-inf')])
