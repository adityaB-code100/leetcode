class Solution:
    def maxDepth(self, s: str) -> int:
        stc=0
        maxi=0

        for c in s:
            if c=="(":
                stc+=1
                maxi=max(maxi,stc)
            elif c==')' and stc>0:
                stc-=1
            
            else:
                continue
        
        return maxi 
        