class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        def dfs(b,r1,c1):
            for k in range(9):
                if (b==board[r1][k] and k!=c1) or (b==board[k][c1] and k!=r1):
                    return False
            for n in range(9):
                for m in range(9):
                    if n == r1 and m == c1:
                            continue
                    if n//3 == r1//3 and m//3 == c1//3:
                        if b == board[n][m]:
                            return False                   
            return True               
        for i in range(9):
            for j in range(9):
                if board[i][j] != ".":
                   d=dfs(board[i][j],i,j)
                   if not d:
                      return False
        return True            



        
