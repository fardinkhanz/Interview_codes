class Solution:
    def mySqrt(self, x: int) -> int:
        if x==0:
            return 0
        f,l=1,x
        while f<=l:
            m=f+(l-f)//2
            if m==x//m:
                return m
            elif m> x//m:
                l=m-1
            else:
                f=m+1
        return l                    
        
