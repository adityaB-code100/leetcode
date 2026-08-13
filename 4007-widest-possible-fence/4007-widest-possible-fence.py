class Solution:
    def maximumWidth(self, planks: List[int]) -> int:
        freq = {}

        for x in planks:
            freq[x] = freq.get(x, 0) + 1

        heights = list(freq.keys())

        width = {}

        for h in heights:
            width[h] = freq[h]

        n = len(heights)

        for i in range(n):
            for j in range(i, n):
                h = heights[i] + heights[j]

                if i == j:
                    count = freq[heights[i]] // 2
                else:
                    count = min(freq[heights[i]], freq[heights[j]])

                width[h] = width.get(h, 0) + count

        return max(width.values())