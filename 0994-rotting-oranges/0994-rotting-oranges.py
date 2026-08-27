from collections import deque
class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        m=len(grid)
        n=len(grid[0])
        fresh_cnt = 0
        queue = deque()


        for i in range(m):
            for j in range(n):
                if grid[i][j]==2:
                    queue.append((i,j))
                elif grid[i][j]==1:
                    fresh_cnt+=1

        
        minut=0

        while len(queue) != 0 and fresh_cnt>0:
            minut+=1

            roten=len(queue)

            for _ in range(roten):
                i,j=queue.popleft()

                for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
                    new_i, new_j = i + dx, j + dy
                    if new_i < 0 or new_i == m or new_j < 0 or new_j == n:
                        continue
                    if grid[new_i][new_j] == 0 or grid[new_i][new_j] == 2:
                        continue
                    fresh_cnt -= 1
                    grid[new_i][new_j] = 2
                    queue.append((new_i, new_j))
                    
        if fresh_cnt > 0:
            return -1
        return minut