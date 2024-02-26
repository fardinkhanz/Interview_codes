class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        n=len(s)
        ml=0
        charset=set()
        l=0
        for r in range(n):
            if s[r] not in charset:
                charset.add(s[r])
                ml=max(ml,r-l+1)
            else:
                while s[r] in charset:
                    charset.remove(s[l])
                    l+=1
                charset.add(s[r])
        return ml            


        
