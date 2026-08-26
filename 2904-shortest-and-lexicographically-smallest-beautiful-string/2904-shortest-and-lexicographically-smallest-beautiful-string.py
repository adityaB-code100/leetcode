class Solution(object):
    def shortestBeautifulSubstring(self, s, k):
        my_dict = {
            '1': 0,
            '0': 0
        }

        i = 0
        result = []

        temp = []

        while i < len(s):

            my_dict[s[i]] += 1
            temp.append(s[i])

            if my_dict['1'] == k:

                while temp[0] == '0':
                    a = temp.pop(0)
                    my_dict[a] -= 1

                result.append("".join(temp))

                a = temp.pop(0)
                my_dict[a] -= 1

            i += 1

        if not result:
            return ""

        shortest = min(result, key=len)

        ans = shortest

        for x in result:
            if len(x) == len(shortest) and x < ans:
                ans = x

        return ans