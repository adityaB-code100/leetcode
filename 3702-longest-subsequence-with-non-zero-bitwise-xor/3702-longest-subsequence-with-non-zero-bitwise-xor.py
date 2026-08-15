class Solution:
    def longestSubsequence(self, nums: List[int]) -> int:
        n=len(nums)
        x=0
        for c in nums:
            x=c^x
        
        if x>0:
            return n
        else:
            if 0 in nums and len(set(nums))==1:
                return 0

            else:

              return n-1
