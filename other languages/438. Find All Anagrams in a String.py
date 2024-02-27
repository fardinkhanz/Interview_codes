class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        pl,sl=len(p),len(s)
        countt={}
        if pl>sl:
            return[]
        res=[]
       
        for c in p:
            countt[c]=1+countt.get(c,0)
        
        for i in range(pl-1):
            if s[i] in countt: countt[s[i]]-=1

        for i in range(-1,sl-pl+1):
            if i>-1 and s[i] in countt:
                countt[s[i]]+=1
            if i+pl < sl and s[i+pl] in countt:
                countt[s[i+pl]]-=1
            if all(v==0 for v in countt.values()):
                res.append(i+1)        
            
        return res        



                

        
