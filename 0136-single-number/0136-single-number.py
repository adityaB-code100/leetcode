class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        temp=0

        for c in nums:
            temp=temp^c

        return temp

        