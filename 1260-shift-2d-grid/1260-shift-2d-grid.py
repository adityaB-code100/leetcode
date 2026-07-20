class Solution:
    def shiftGrid(self, grid: List[List[int]], k: int) -> List[List[int]]:
        my_dict=dict()

        m=len(grid)
        n=len(grid[0])

        for i in range(m):
            for j in range(n):
                my_dict[(i,j)]=grid[i][j]

        #print(my_dict)

        total=m*n
        k=k%total

        for i in range(m):
            for j in range(n):
                # temp=my_dict[(i,j)]
                idx=i*n+j

                idx=(idx+k)%total

                i_n=idx//n
                j_n=idx%n

                grid[i_n][j_n]=my_dict[(i,j)]


        return grid        