import heapq
class Solution:
    def frequencySort(self, s: str) -> str:
        
        temp=[]
        heapq.heapify(temp)
        my_dict=dict()
        for c in s:
            my_dict[c]=my_dict.get(c,0)+1

        for key,val in my_dict.items():
            heapq.heappush(temp,(-val,key))
        result=""
        while temp:
            a=heapq.heappop(temp) 
            print(a)
            result+=(-a[0])*a[1]

        return result