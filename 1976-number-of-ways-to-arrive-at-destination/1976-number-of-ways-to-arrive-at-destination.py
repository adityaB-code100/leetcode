import sys
import heapq
from typing import List


class Solution:
    def countPaths(self, n: int, roads: List[List[int]]) -> int:
        MOD = 10**9 + 7

        # 1️⃣ build undirected adjacency list
        adj_list = [[] for _ in range(n)]
        for u, v, w in roads:
            adj_list[u].append([v, w])
            adj_list[v].append([u, w])

        # 2️⃣ distance & ways arrays
        distance = [sys.maxsize for _ in range(n)]
        ways     = [0 for _ in range(n)]
        distance[0] = 0        # start city
        ways[0]     = 1        # one trivial path to itself

        # 3️⃣ min-heap for Dijkstra (dist, node)
        priority_queue = [[0, 0]]

        while priority_queue:
            dist, node = heapq.heappop(priority_queue)

            # Skip stale entries
            # if dist != distance[node]:
            #     continue

            # 4️⃣ relax edges
            for adjNode, weight in adj_list[node]:
                new_dist = dist + weight

                if new_dist < distance[adjNode]:
                    # found a strictly better time
                    distance[adjNode] = new_dist
                    heapq.heappush(priority_queue, [new_dist, adjNode])
                    ways[adjNode] = ways[node]              # reset count

                elif new_dist == distance[adjNode]:
                    # found another shortest route
                    ways[adjNode] = (ways[adjNode] + ways[node]) % MOD

        return ways[n - 1] % MOD