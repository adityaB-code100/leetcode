class Solution:
    def countTasks(self, tasks: List[int], shifts: List[int]) -> List[int]:
        def binary(nums, target):
            left = 0
            right = len(nums)

            while left < right:
                mid = (left + right) // 2

                if nums[mid] <= target:
                    left = mid + 1
                else:
                    right = mid

            return left

        n = len(tasks)
        prefix = [0] * n
        prefix[0] = tasks[0]

        for i in range(1, n):
            prefix[i] = prefix[i - 1] + tasks[i]

        op = [0] * len(shifts)

        completed = 0

        for i in range(len(shifts)):
            completed += shifts[i]

            if completed >= prefix[-1]:
                op[i] = 0
                completed = 0
            else:
                idx = binary(prefix, completed)
                op[i] = n - idx

        return op