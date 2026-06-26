class Solution:
    def countMonobit(self, n: int) -> int:

        def binary(num):
            ls=[]

            while num>0:
                ls.append(num%2)
                num=num//2

            return set(ls)

        count=1
        for i in range(1,n+1):
            temp=binary(i)
            if len(temp)==1:
                count+=1
        
        return count

        