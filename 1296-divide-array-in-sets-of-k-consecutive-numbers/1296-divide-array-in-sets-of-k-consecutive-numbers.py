class Solution(object):
    def isPossibleDivide(self, hand, groupSize):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        count_map = {}
        for card in hand:
            count_map[card] = count_map.get(card, 0) + 1
        
        hand.sort()
        
        for i in range(len(hand)):
            if count_map[hand[i]] == 0:
                continue
            
            for j in range(groupSize):
                curr_card = hand[i] + j
                
                if count_map.get(curr_card, 0) == 0:
                    return False
                
                count_map[curr_card] -= 1
        
        return True