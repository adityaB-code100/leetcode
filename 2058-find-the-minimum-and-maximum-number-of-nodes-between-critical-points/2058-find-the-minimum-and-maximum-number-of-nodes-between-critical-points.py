class Solution:
    def nodesBetweenCriticalPoints(self, head: Optional[ListNode]) -> List[int]:
        result = [float('inf'), float('-inf')]

        temp = head
        temp2 = head.next
        temp3 = head.next.next

        count = 2

        first = -1
        prev = -1

        while temp3:
            # Check critical point
            if ((temp2.val > temp.val and temp2.val > temp3.val) or
                (temp2.val < temp.val and temp2.val < temp3.val)):

                # First critical point
                if first == -1:
                    first = count

                # Distance between consecutive critical points
                if prev != -1:
                    result[0] = min(result[0], count - prev)

                # Maximum distance
                result[1] = max(result[1], count - first)

                prev = count

            count += 1
            temp = temp.next
            temp2 = temp2.next
            temp3 = temp3.next

        if first == -1 or prev == first:
            return [-1, -1]

        return result