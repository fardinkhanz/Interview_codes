class Solution:
    def spiralOrder(self, m: List[List[int]]) -> List[int]:
        res=[]
        r,c=len(m),len(m[0])
        def spiral(n,r,c,res,r1,c1,dr,dc):
            if r==0 or c==0:
                return
            for i in range(c):
                r1=r1+dr
                c1=c1+dc
                res.append(m[r1][c1])
            return spiral(m,c,r-1,res,r1,c1,dc,-dr)        
        spiral(m,r,c,res,0,-1,0,1)
        return res
        
