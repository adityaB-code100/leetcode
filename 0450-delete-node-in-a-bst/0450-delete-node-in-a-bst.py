# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def deleteNode(self, root: Optional[TreeNode], key: int) -> Optional[TreeNode]:

        def solve(node,k):
            if not node:

                return
            if k < node.val:
                node.left = solve(node.left,k)

            elif k > node.val:
                node.right = solve(node.right,k)
            else:
                if not node.left and not node.right:
                    return None
                
                elif not node.left:
                    return node.right
                elif not node.right:
                    return node.left
                else:
                    temp=node.right
                    while temp.left:
                        temp=temp.left
                    node.val=temp.val
                    node.right=solve(node.right,node.val)
            return node

        return solve(root,key)