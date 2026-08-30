from collections import deque
class Solution:
    def ladderLength(self, beginWord: str, endWord: str, wordList: List[str]) -> int:
        wordset={num for num in wordList}
        if endWord not in wordset:
            return 0
        Q=deque()
        Q.append((beginWord,1))

        while Q:
            word,level=Q.popleft()
            if word==endWord:
                return level
            word=list(word)
            for i in range(len(word)):
                for j in range(26):
                    temp=word[:]
                    temp[i]=chr(ord('a')+j)

                    if "".join(temp) in wordset:
                        Q.append(("".join(temp),level+1))

                        wordset.remove("".join(temp))
        return 0    


        print(wordset)
        