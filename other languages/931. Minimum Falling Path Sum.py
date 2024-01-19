class Solution:
    def minFallingPathSum(self, matrix: List[List[int]]) -> int:
        m,n=len(matrix),len(matrix[0])
        if m==1:
            return matrix[0][0]

        dp = [[0] * m for _ in range(m)]
        dp = matrix.copy()

        for i in range(n-2,-1,-1):
            for j in range(n):
                minp=dp[i+1][j]
                if j>0:
                    minp=min(minp,dp[i+1][j-1])
                if j<n-1:
                    minp=min(minp,dp[i+1][j+1])
                dp[i][j]+=minp
        result=float('inf')
        for num in dp[0]:
            result = min(result,num)

        return result                        

        
