class Solution:
    def longestValidParentheses(self, s: str) -> int:
        l=len(s)
        dp=[0] * l
        count=0

        for i in range(1,l):
            if s[i]==')' and s[i-1]=='(':
                dp[i]=dp[i-2]+2
            elif s[i]==')' and s[i-1]==')' and i-dp[i-1]-1 >= 0 and s[i-dp[i-1]-1] =='(':
                dp[i]=dp[i-1]+dp[i-dp[i-1]-2] + 2
            count=max(count,dp[i])

        return count            
        
