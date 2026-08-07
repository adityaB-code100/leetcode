class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        n=len(prices)
        profit=0
        maxi=float("inf")

        for i in range(n):
            if prices[i]<maxi:
                maxi=prices[i]
            elif prices[i]-maxi>profit:
                profit=prices[i]-maxi

        
        return profit


        