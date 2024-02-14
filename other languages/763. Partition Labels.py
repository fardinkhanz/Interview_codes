class Solution:
    def partitionLabels(self, s: str) -> List[int]:
        n=len(s)
        end={s[i]:i for i in range(n)}
        ans,i=[],0

        while i<n:
            last,j=end[s[i]],i+1
            while j<last:
                if end[s[j]]>last:
                    last=end[s[j]]
                j+=1
            ans.append(last-i+1)
            i=last+1
        return ans            
        
