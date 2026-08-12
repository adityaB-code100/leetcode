class Solution:
    def maxSubarrayLength(self, nums: List[int], k: int) -> int:
        my_dict=dict()
        maxi=float('-inf')
        j=0
        n=len(nums)
        for i in range(n):
            key=nums[i]

            if key not in my_dict:
                my_dict[key]=0
            
            my_dict[key]+=1

            while my_dict[key]>k:
                my_dict[nums[j]]-=1
                j+=1


        
            maxi=max(maxi,i-j+1)

        return maxi
              