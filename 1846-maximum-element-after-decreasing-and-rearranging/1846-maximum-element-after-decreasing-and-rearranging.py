class Solution:
    def maximumElementAfterDecrementingAndRearranging(self, nums: List[int]) -> int:
        nums.sort()

        if nums[0]!=1:
            nums[0]=1
        
        for i in range(1,len(nums)):
            if abs(nums[i-1]-nums[i])>1:
                nums[i]=abs(1+nums[i-1])

            
        
        return max(nums)
        