class Solution(object):
    def missingMultiple(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        my_dict=dict()

        for num in nums:
            my_dict[num]=my_dict.get(num,0)+1
        
        i=1
        while True:
            if k*i not in my_dict:
                return k*i
            i+=1

        