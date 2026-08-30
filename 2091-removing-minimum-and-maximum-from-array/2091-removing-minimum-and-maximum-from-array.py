class Solution:
    def minimumDeletions(self, nums: List[int]) -> int:
        maxi=float('-inf')
        mini=float('inf')

        k=0
        j=0
        n=len(nums)
        if n==1:
            return 1
     
        

        for i in range(n):
            key=nums[i]
            if key>maxi:
                maxi=key
                k=i
            
            if key<mini:
                mini=key
                j=i

        left=min(j,k)
        right=max(j,k)

        op1=right+1
        op2=n-left

        op3=left+1+n-right

        return min(op1,op2,op3)
        