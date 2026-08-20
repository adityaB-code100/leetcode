# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def searchBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:
        self.head=None

        def serch(node,x):
            if not node:
                return 
            if node.val==x:
                self.head=node
            
            if node.val<x:
                serch(node.right,x)
            else:
                serch(node.left,x)
        serch(root,val)

        return self.head
        