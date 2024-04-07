class Solution:
    def checkValidString(self, s: str) -> bool:
        mn, mx=0,0
        for i in s:
            if i == '(':
                mn,mx=mn+1,mx+1
            elif i == ')':
                mn,mx=mn-1,mx-1
            else:
                mn,mx=mn-1,mx+1
            if mx < 0:
                return False
            if mn < 0:
                mn=0
        return mn==0       

        
