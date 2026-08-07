class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        m=len(matrix)
        n=len(matrix[0])
        zr=set()
        zc=set()

        for i in range(m):
            for j in range(n):
                if matrix[i][j]==0:
                    zr.add(i)
                    zc.add(j)

        for i in range(m):
            for j in range(n):
                if i in zr or j in zc:
                     matrix[i][j]=0
                   

                    

        return matrix