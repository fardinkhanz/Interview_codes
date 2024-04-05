class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        l1,l2,st1,st2=len(s),len(t),[0]*127,[0]*127
        if l1!=l2:
           return False

        for i in range(l1):
            st1[ord(s[i])]+=1
            st2[ord(t[i])]+=1
        for i in range(127):
            if st1[i]!=st2[i]:
                return False    
        return True        
