class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        s1C=Counter(s1)
        s2C=Counter(s2[:len(s1)])

        if s1C==s2C:
            return True

        s1l=len(s1)
        for r in range(s1l,len(s2)):
            l=r-s1l

            s2C[s2[r]]=s2C.get(s2[r],0)+1
            s2C[s2[l]]-=1



            if s1C==s2C:
               return True

        return False



        
