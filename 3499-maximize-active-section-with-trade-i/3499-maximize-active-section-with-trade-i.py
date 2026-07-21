class Solution:
    def maxActiveSectionsAfterTrade(self, s: str) -> int:

        
        t = "1" + s + "1"
        current = s.count('1')
        ans = current

        blocks = []
        i = 0
        while i < len(t):
            j = i
            while j < len(t) and t[j] == t[i]:
                j += 1
            blocks.append((t[i], j - i))
            i = j

        for i in range(1, len(blocks) - 1):
            if (
                blocks[i][0] == '1'
                and blocks[i - 1][0] == '0'
                and blocks[i + 1][0] == '0'
            ):
                gain = blocks[i - 1][1] + blocks[i + 1][1]
                ans = max(ans, current + gain)

        return ans