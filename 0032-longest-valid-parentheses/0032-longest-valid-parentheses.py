class Solution(object):
    def longestValidParentheses(self, s):
        oc = cc = 0
        maxi = 0

        # Left to right
        for p in s:
            if p == "(":
                oc += 1
            else:
                cc += 1

            if oc == cc:
                maxi = max(maxi, oc * 2)

            if cc > oc:
                oc = cc = 0

        oc = cc = 0

        # Right to left
        for p in s[::-1]:
            if p == "(":
                oc += 1
            else:
                cc += 1

            if oc == cc:
                maxi = max(maxi, oc * 2)

            if oc > cc:
                oc = cc = 0

        return maxi