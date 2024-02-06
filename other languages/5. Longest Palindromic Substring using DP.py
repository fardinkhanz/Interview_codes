class Solution:
    def longestPalindrome(self, s: str) -> str:
        l=len(s)
        if l<=1:
           return s

        maxl=1
        maxs=s[0]
        dp=[[False for _ in range(l)] for _ in range(l)]

        for i in range(l):
            dp[i][i]=True
            for j in range(l):
                if s[i]==s[j] and (i-j <= 2 or dp[j+1][i-1]):
                    dp[j][i]=True
                    if i-j+1 >maxl:
                        maxl=i-j+1
                        maxs=s[j:i+1]
        return maxs                     
