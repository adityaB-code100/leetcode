class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        l,r,z,maxi=0,0,0,0

        while r<len(nums):

            if nums[r]==0:
                z+=1
            if z>k:
                if nums[l]==0:
                    z-=1
                l+=1
            if z<=k:
                maxi=max(r-l+1,maxi)
            r+=1


        return maxi