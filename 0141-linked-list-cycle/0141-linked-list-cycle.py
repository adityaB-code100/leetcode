# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        if head:
            slow=head
            if head.next==None :
                return False
            if head.next.next==None :
                return False
            fast=head.next.next

            while fast and fast.next:
                if slow==fast:
                    return True
                slow=slow.next
                if fast.next==None:
                    return False
                fast=fast.next.next
            
            return False
        else:
                        return False

