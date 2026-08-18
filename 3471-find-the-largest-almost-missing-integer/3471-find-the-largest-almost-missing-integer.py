class Solution:
    def largestInteger(self, nums: List[int], k: int) -> int:
        my_dict=dict()

        for num in nums:
            my_dict[num]=my_dict.get(num,0)+1

        if k==len(nums):
            return max(nums)
       

        if k==1:
            temp=nums[:]
            temp.sort(reverse=True)
            for num in temp:
                if my_dict[num]==1:
                    return num
        
        if my_dict[nums[0]]==1 and my_dict[nums[-1]]==1:
            return max(nums[0],nums[-1])
        elif my_dict[nums[0]]==1:
            return nums[0]
        elif  my_dict[nums[-1]]==1:
            return nums[-1]
        else:
            return -1

            
        