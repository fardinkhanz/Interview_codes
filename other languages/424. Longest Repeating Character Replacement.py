class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        ln=len(s)
        l,r=0,0
        char={}
        maxfrq,maxi=0,0
        for r in range(ln):
            char[s[r]]=char.get(s[r],0)+1
            maxfrq=max(maxfrq,char[s[r]])
            if r-l+1 - maxfrq > k:
                char[s[l]]-=1
                l+=1

            maxi=max(maxi,r-l+1)    

                              
        return maxi       



        
