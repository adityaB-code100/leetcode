class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:

        mini=float('inf')
        maxi=float("-inf")
        sets=set()

        for num in nums:
            if num>maxi:
                maxi=num
            if num<mini:
                mini=num
            sets.add(num)

        print(mini,maxi)
        result=list()
        for i in range(mini,maxi):
            if i not in sets:
                result.append(i)


        return result