import heapq

class Solution(object):
    def findKthLargest(self, nums, k):
        nums = [-x for x in nums]

        heapq.heapify(nums)
        print(nums)
        while k > 1:
            heapq.heappop(nums)
            k -= 1

        return -heapq.heappop(nums)