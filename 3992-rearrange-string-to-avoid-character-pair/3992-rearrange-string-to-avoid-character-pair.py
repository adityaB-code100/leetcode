class Solution:
    def rearrangeString(self, s: str, x: str, y: str) -> str:
        s=list(s)

        xc=s.count(x)
        yc=s.count(y)

        for _ in range(xc):
            s.remove(x)

        for _ in range(yc):
            s.remove(y)

        s="".join(s)+y*yc+x*xc
        return s        