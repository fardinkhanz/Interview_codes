class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        col,row=len(grid[0]), len(grid)
        dp=[[float("inf") for _ in range(col+1)]for _ in range(row+1)]

        dp[row-1][col]=0

        for i in range(row-1,-1,-1):
            for j in range(col-1,-1,-1):
                dp[i][j]= grid[i][j] + min(dp[i+1][j] , dp[i][j+1])  
        return dp[0][0]        
        
