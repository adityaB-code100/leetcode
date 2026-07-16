import math
class Solution:
    def gcdSum(self, nums: list[int]) -> int:

        def gcd(x,y):
           

            return math.gcd(x,y)

        lmax=nums[0]
        n=len(nums)
        prefix=[1]*n
        for i in range(n):
            lmax=max(lmax,nums[i])

            prefix[i]=gcd(nums[i],lmax)
        prefix.sort()
        left=0
        right=n-1
        total=0
        while left<right:
            total+=gcd(prefix[left],prefix[right])
            left+=1
            right-=1
        return total
        
        
            