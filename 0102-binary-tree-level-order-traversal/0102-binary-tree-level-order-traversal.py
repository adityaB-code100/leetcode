# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import deque

class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root :
            return []
        ls=list()

        q = deque([root])
        ans = []

        while q:
            level=[]

            for _ in range(len(q)):
                head=q.popleft()
                level.append(head.val)
                            
                if head.left:
                    q.append(head.left)
            
                if head.right:
                    q.append(head.right)
            ans.append(level)
            
        return ans
            
