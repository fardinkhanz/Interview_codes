class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        d1,d2,n,n2=[0]*127,[0]*127,len(s),len(t)
        if n!=n2:
            return False

        for i in range(n):
            if d1[ord(s[i])] != d2[ord(t[i])]:
                return False
            d1[ord(s[i])]=i+1
            d2[ord(t[i])]=i+1
        return True        
        
