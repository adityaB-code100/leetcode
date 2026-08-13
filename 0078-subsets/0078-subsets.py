class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        
        seen=list()
        n=len(nums)
        def  recursion(idx,arr):
    
            
            seen.append(arr[:])
            for i in range(idx,n):

                arr.append(nums[i])

                recursion(i+1,arr)
            
                arr.pop()
        recursion(0,[])
            
        return seen


            

            