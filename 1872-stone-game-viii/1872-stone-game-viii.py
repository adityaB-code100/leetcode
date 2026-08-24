class Solution(object):
    def stoneGameVIII(self, stones):
        """
        :type stones: List[int]
        :rtype: int
        """
        n=len(stones)

        for i in range(1,n):
            stones[i]+=stones[i-1]
        
        maxi=stones[-1]

        for i in range(n-2,0,-1):
            maxi=max(maxi,stones[i]-maxi)

        
        return maxi