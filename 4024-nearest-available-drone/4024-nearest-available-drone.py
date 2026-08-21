class Solution:
    def nearestDrone(self, drones: list[list[int]], target: list[int]) -> int:
        min_dist = float('inf')
        ans = -1

        for y in range(len(drones)):
            x, z, k = drones[y]

            dist = abs(target[0] - x) + abs(target[1] - z)

            if dist <= k and dist < min_dist:
                min_dist = dist
                ans = y

        return ans