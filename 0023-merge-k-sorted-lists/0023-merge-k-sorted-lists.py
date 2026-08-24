# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
import heapq

class Solution(object):
    def mergeKLists(self, lists):

        pq = []
        counter = 0

        # Put first node of every list into heap
        for node in lists:
            if node:
                heapq.heappush(pq, (node.val, counter, node))
                counter += 1

        dummy = ListNode(0)
        temp = dummy

        while pq:
            value, _, node = heapq.heappop(pq)

            temp.next = node
            temp = temp.next

            # Add next node from the same list
            if node.next:
                heapq.heappush(pq, (node.next.val, counter, node.next))
                counter += 1

        return dummy.next