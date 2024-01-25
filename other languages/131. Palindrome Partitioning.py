class Solution:
    def partition(self, s: str) -> List[List[str]]:
        res=[]
        ans=[]
        def back(i):
            if i>=len(s):
                res.append(ans.copy())
                return 
            for j in range(i,len(s)):
                if ispal(s,i,j):
                    ans.append(s[i:j+1])
                    back(j+1)
                    ans.pop()

        def ispal(s,l,r):
            while l<r:
                if s[l] != s[r]:
                    return False
                l,r=l+1,r-1
            return True
        back(0)
        return res            


