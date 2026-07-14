class Solution:
    def secondsBetweenTimes(self, startTime: str, endTime: str) -> int:
        def time(s):
            t=60*60*(int(s[0:2]))
            t+=60*(int(s[3:5]))
            t+=int(s[6:])

            return t


        return -time(startTime)+time(endTime)