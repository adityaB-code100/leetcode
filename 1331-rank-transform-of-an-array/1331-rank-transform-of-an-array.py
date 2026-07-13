class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:

        def binary(nums,target):
            left=0
            right=len(nums)
            while left<=right:
                mid=(left+right)//2

                if nums[mid]==target:
                    return mid
                elif nums[mid]>target:
                    right=mid-1
                else:
                    left=mid+1

                    
        temp=arr[::]

        temp=set(temp)
        temp=list(temp)

        temp.sort()
        n=len(temp)
        for i in range(len(arr)):
            idx=binary(temp,arr[i])
            arr[i]=idx+1

        return arr

        