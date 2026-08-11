class Solution:
    def missingInteger(self, nums: List[int]) -> int:
        seen=set()
        maxi=nums[0]
        idx=0
        for i in range(1,len(nums)):
            if nums[i]==nums[i-1]+1:
                maxi=max(maxi,maxi+nums[i])
            else:
                i=idx
                break
        
        seen=set(nums[idx:])
        j=maxi
        while True:
            if j not in seen:
                return j 
            else:
                j+=1

        