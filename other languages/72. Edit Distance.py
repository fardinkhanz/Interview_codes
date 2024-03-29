class Solution:
    def minDistance(self, word1: str, word2: str) -> int:
        l1,l2=len(word1),len(word2)
        dp=[[0] * (l2+1) for _ in range(l1+1)]
        for i in range(l1+1):
            for j in range(l2+1):
                if i==0:
                    dp[i][j]=j
                elif j==0:
                    dp[i][j]=i
                elif word1[i-1]==word2[j-1]:
                    dp[i][j]=dp[i-1][j-1]
                else:
                    dp[i][j]=1+min(dp[i-1][j-1],dp[i][j-1],dp[i-1][j])

        return dp[l1][l2]
        
