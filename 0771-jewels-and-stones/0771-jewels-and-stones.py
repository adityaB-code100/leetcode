class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        my_dict=dict()

        for s in jewels:
            my_dict[s]=1
        
        count=0
        for k in stones:
            if k in my_dict:
                count+=1
            
        
        return count
        