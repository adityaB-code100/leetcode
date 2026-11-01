class Solution:
    def minMoves(self, nums: list[int]) -> int:
        mini=min(nums)
        c=0
        for x in nums:
            c+=(x-mini)
        
        return c