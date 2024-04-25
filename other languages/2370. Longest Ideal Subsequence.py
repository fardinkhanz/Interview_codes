class Solution:
    def longestIdealString(self, s: str, k: int) -> int:
        dp=[0]*26
        for c in s:
            cur=ord(c)-ord('a')
            l=1
            for prev in range(26):
                if abs(cur-prev)<=k:
                    l=max(l,1+dp[prev])
            dp[cur]=l
        return max(dp)            


                

