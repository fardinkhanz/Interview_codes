class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        
        dp=[amount+1]*(amount+1)
        dp[0]=0
        for i in range(1,amount+1):
            for j in coins:
               
                if i-j>=0:
                    dp[i]=min(dp[i],dp[i-j]+1)
                    

        return dp[amount] if dp[amount]!=amount+1 else -1

            
            

        
