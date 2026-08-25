import heapq

class Solution:
    def leastInterval(self, tasks, n):

        freq = {}

        for task in tasks:
            freq[task] = freq.get(task, 0) + 1

        heap = []

        for count in freq.values():
            heapq.heappush(heap, -count)

        time = 0

        while heap:

            temp = []
            cycle = n + 1

            while cycle > 0 and heap:

                count = -heapq.heappop(heap)

                count -= 1

                if count > 0:
                    temp.append(count)

                time += 1
                cycle -= 1

            for count in temp:
                heapq.heappush(heap, -count)

            if heap:
                time += cycle

        return time