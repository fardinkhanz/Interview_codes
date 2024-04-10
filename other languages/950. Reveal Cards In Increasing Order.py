class Solution:
    def deckRevealedIncreasing(self, deck: List[int]) -> List[int]:
        deck.sort()
        l=len(deck)
        d1=[0]*l
        ind=deque(range(l))
        for c in deck:
            i=ind.popleft()
            d1[i]=c
            if ind:
                ind.append(ind.popleft())
        return d1        



        
