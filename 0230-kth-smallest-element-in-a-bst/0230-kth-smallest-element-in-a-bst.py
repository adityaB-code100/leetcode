# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:

        self.key=k
        self.mini=None

        def solve(node):
            if not node:
                return
            if self.key==0:
                return

            solve(node.left)

            self.key-=1

            if self.key==0:
                self.mini=node.val
                return 
            solve(node.right)

        
        solve(root)
        return self.mini
        