class Solution:
    def elevatorRequests(self, n: int, requests: list[int]) -> int:
        ele=0
        time=0
        for num in requests:
            time+=abs(num-ele)
            ele=num

        return time