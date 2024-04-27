class Solution:
    def findRotateSteps(self, ring: str, key: str) -> int:
        memo={}
        def find(r,k):
            if k==len(key):
                return 0
            if (r,k) in memo:
                return memo[(r,k)]   
            res=float("inf")    
            for i,c in enumerate(ring):
                if c==key[k]:
                   d=min(abs(r-i),len(ring)-abs(r-i))
  
                   res=min(res , d + 1 + find(i,k+1))
            memo[(r,k)]=res       
            return res    


        return find(0,0)
        
