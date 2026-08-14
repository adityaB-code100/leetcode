class Solution:
    def maximumLengthSubstring(self, s: str) -> int:
        my_dict=dict()
        maxi=0
        j=0
        for i in range(len(s)):
            c=s[i]
            my_dict[c]=my_dict.get(c,0)+1
            if my_dict[c]>2:
                while my_dict[c]>2:
                    my_dict[s[j]]-=1
                    j+=1
            maxi=max(maxi,i-j+1)


        return maxi

        
       

        