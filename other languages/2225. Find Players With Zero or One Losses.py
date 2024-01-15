class Solution:
    def findWinners(self, matches: List[List[int]]) -> List[List[int]]:
        losses=[0]*100001

        for win, loss in matches:
            if losses[win]==0:
                losses[win]=-1
            if losses[loss]==-1:
                losses[loss]=1
            else:
                losses[loss]+=1

        zero= [i for i in range(100001) if losses[i]==-1]
        one= [i for i in range(100001) if losses[i]==1]

        return [zero,one]            

        
