class Solution:
    def maxDepth(self, s: str) -> int:
        s1,l=0,0
        for i in s:
            if i=="(":
                l+=1
            if i==")":
                l-=1
            s1=max(l,s1)    
        return s1        


        
