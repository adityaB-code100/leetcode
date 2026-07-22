# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def countDominantNodes(self, node: TreeNode | None) -> int:
        count=0
        def solve(root):
            nonlocal count
            if not root :
                return float("-inf")
            if not root.left and not root.right:
                count+=1
                return root.val
            
            a=solve(root.left)
            b=solve(root.right)

            maxi=max(a,b,root.val)
            if maxi==root.val:
                count+=1
            
            return maxi

        
        temp=solve(node)

        return count


        






        