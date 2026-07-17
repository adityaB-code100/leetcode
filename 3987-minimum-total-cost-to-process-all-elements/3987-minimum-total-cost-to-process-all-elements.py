class Solution:
    def minimumCost(self, nums: list[int], k: int) -> int:
        count=0
        temp=k

        for c in nums:
            if temp-c>=0:
                temp=temp-c
            else:
                a=math.ceil((c-temp)/k)
                count+=a
                temp+=a*k
                temp=temp-c
        

        
        temp=0
        temp=(count*(count+1))//2
        return temp%(10**9+7)



        
        