from collections import deque

class Solution:
    def numEnclaves(self, grid: List[List[int]]) -> int:
        m = len(grid)
        n = len(grid[0])

        Q = deque()

        for i in range(m):
            if grid[i][0] == 1:
                Q.append((i, 0))

            if grid[i][n - 1] == 1:
                Q.append((i, n - 1))

        for j in range(n):
            if grid[0][j] == 1:
                Q.append((0, j))

            if grid[m - 1][j] == 1:
                Q.append((m - 1, j))

        visited = [[0 for _ in range(n)] for _ in range(m)]

        def inBounds(i, j):
            return 0 <= i < m and 0 <= j < n

        count = 0

        while Q:
            i, j = Q.popleft()

            if visited[i][j] == 1:
                continue

            visited[i][j] = 1
            count += 1

            for ii, jj in [(i+1, j), (i-1, j), (i, j+1), (i, j-1)]:

                if not inBounds(ii, jj):
                    continue

                if grid[ii][jj] == 0 or visited[ii][jj] == 1:
                    continue

                Q.append((ii, jj))

        total = 0

        for i in range(m):
            for j in range(n):
                if grid[i][j] == 1:
                    total += 1

        return total - count