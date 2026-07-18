class Solution:
    def findGCD(self, nums: List[int]) -> int:

        maxi,mini=max(nums),min(nums)
        a=1
        for i in range(2,mini+1):
            if mini%i==0 and maxi%i==0:
                a=i
            

        return a
