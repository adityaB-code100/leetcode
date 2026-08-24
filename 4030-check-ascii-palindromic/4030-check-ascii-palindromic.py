class Solution(object):
    def isPalindromic(self, s):
        """
        :type s: str
        :rtype: bool
        """
        # print(bin(ord('i')))
        # print(ord('f'))
        # # print(chr('a')) 
        def solve(num):
            binary = ""

            for _ in range(8):
                rem = num % 2
                binary = str(rem) + binary
                num //= 2

            return binary
        result=''
        for i in s:
            result+=solve(ord(i))
        print(result)
        return result[::-1]==result



        