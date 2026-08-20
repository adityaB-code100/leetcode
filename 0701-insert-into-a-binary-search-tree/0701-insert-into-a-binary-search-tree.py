# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def insertIntoBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:
        if not root:
            return TreeNode(val)

        nn=TreeNode(val)

        def insert(node,x,nn):
            if not node:
                return nn
            
            if node.val>x:
                node.left=insert(node.left,x,nn)
            else:
                node.right=insert(node.right,x,nn)

            return node
        
        return  insert(root,val,nn)


        