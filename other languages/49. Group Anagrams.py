class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        hashh={}
        res=[]
        for i in strs:
            sort=''.join(sorted(i))
            if sort in hashh:
                res[hashh[sort]].append(i)
            else:
                hashh[sort]=len(res)
                res.append([i])
        return res            
        
