class Solution:
    def minBitFlips(self, start: int, goal: int) -> int:
        temp=start^goal
        count=0
        while temp>0:
            count+=(temp)&1
            temp=temp>>1
        return count
        