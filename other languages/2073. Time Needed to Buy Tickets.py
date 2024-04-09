class Solution:
    def timeRequiredToBuy(self, tickets: List[int], k: int) -> int:
        cnt,i=0,0
        l=len(tickets)
        while tickets[k] != 0:
            if tickets[i] != 0:
                tickets[i]-=1
                cnt+=1
            i=(i+1) % l
            
        return cnt    

            
        
