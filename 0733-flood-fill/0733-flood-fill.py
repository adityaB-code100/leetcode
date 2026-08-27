from collections import deque

class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        queue = deque()

        old_color = image[sr][sc]

        if old_color == color:
            return image

        image[sr][sc] = color
        queue.append((sr, sc))

        m = len(image)
        n = len(image[0])

        while len(queue) > 0:
            i, j = queue.popleft()

            for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
                new_i = i + dx
                new_j = j + dy

                if new_i < 0 or new_i == m or new_j < 0 or new_j == n:
                    continue

                if image[new_i][new_j] != old_color:
                    continue

                image[new_i][new_j] = color
                queue.append((new_i, new_j))

        return image