# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def reverseList(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        if not head:
            return None
        self.head=head

        def solve(node,prev):
            
                
            if node.next==None:
                node.next=prev
                self.head=node
                return
            if node.next!=None:
                solve(node.next,node)
            
            node.next=prev
            

        solve(head,None)
        return self.head