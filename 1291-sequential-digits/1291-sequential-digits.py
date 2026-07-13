class Solution:
    def sequentialDigits(self, low: int, high: int) -> List[int]:
        a=[]
        
        for i in range(1,10):
            num=i
            next=i+1

            while num<high and next<10:
                num=num*10+next
                if low<=num<=high:
                    a.append(num)
                
                next+=1
            
        
        a.sort()
        return a
