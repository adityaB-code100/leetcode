# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        if head:
            curr=head.next
            temp=head
            # curr.next=None
            temp.next=None

            while curr:
                temp2=curr.next
                curr.next=temp
                temp=curr
                curr=temp2

                # temp=temp.next
                # temp.next=curr

                # curr=teamp
            return temp
        else:
            return  None