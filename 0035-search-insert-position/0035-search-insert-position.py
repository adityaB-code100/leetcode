class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        low=0
        high=len(nums)-1
        if low==high and nums[low]==target:
            return low

    
        while low<=high:
            mid=(low+high)//2
            # print(mid)

            if nums[mid]==target:
                return mid
            elif nums[mid]>target:
                high=mid-1
            else:
                low=mid+1

        return low
         
        