class Solution:
    def sumDivisibleByK(self, nums: List[int], k: int) -> int:
        my_dict={}

        for i in nums:
            my_dict[i]=my_dict.get(i,0)+1

        total=0
        for key,val in my_dict.items():
            if val%k==0:
                total+=key*val
        
        return total
        