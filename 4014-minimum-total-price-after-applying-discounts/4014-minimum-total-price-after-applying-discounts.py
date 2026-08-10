class Solution:
    def minPrice(self, prices: list[int], discounts: list[int]) -> float:
        discounts.sort(reverse=True)
        prices.sort(reverse=True)
        # print(discounts,prices)
        # my_dict=dict(zip(discounts,prices))
        # print(my_dict)
        i=0
        a=len(prices)
        b=len(discounts)
        n=max(a,b)


        total=0
        while i<n:
            if i<a and i<b:
                total+=prices[i]*(100-discounts[i])/100
                i+=1
            elif i<a:
                total+=prices[i]
                i+=1
            else:
                break
        

        return (total)
                
        