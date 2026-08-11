# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head:
            if head.next==None :
                return None
            # if head.next.next==None :
            #     return False
            fast=head
            sets=set()
            while fast:
                if fast in sets:
                    return fast
                sets.add(fast)
                fast=fast.next
        else:
                        return None

