class Solution:

    def gcdOfOddEvenSums(self, n: int) -> int:
        def gcd(a, b):
            while b != 0:
                temp = b
                b = a % b
                a = temp
            return a
        sumo=0
        sume=0
        for i in range(n):
            sumo+=(2*i+1)
            sume+=(2*i+2)

        return gcd(sumo,sume)

        