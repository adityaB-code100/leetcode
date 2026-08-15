class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        result=[]
        def recursion(s,n,oc,cc):
            if oc==n and cc==n:
                result.append(s)
                return 
            if oc<n:
                recursion(s+'(',n,oc+1,cc)
            if cc<oc:
                recursion(s+')',n,oc,cc+1)
        recursion('',n,0,0)
        return result