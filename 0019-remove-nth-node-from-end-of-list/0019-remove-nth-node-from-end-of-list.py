# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:

        count=0

        temp=head

        while temp:
            count+=1
            temp=temp.next
        
        count=count-n

        temp=head
        temp2=head
        if count==0:
            return head.next

        while temp:
            if count==0:
                temp2.next=temp.next
                return head
            count-=1
            temp2=temp
            temp=temp.next
        