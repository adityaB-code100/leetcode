class Solution:
    def maximumLength(self, nums: List[int]) -> int:
        
        my_dict=dict()
        maxi=float('-inf')
        for num in nums:
            my_dict[num]=my_dict.get(num,0)+1
        if 1 in my_dict:
            if my_dict[1] % 2 == 0:
                maxi = my_dict[1] - 1
            else:
                maxi = my_dict[1]
        
        temp=set(nums)
       

        for t in temp:
            if t==1:
                continue
            curr = t
            length = 0
            
            while my_dict.get(curr,0)>=2:
                curr*=curr
                length+=2
            if my_dict.get(curr,0)>=1:
                length+=1
            else:
                length-=1
            maxi=max(maxi,length)

        return maxi


        