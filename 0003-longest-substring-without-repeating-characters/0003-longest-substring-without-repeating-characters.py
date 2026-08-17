class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        maxi=float("-inf")
        my_dict=dict()
        if s =="":
            return 0

        j=0

        for i in range(len(s)):
            key=s[i]
            my_dict[key]=my_dict.get(key,0)+1

            if my_dict[key]>1:
                while my_dict[key]>1:
                    my_dict[s[j]]-=1
                    j+=1

            maxi=max(i-j+1,maxi)  

        return maxi