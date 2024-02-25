class Solution:
    def setZeroes(self, m: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        r,c=len(m),len(m[0])
        res=[]
        for i in range(r):
            for j in range(c):
                if m[i][j]==0:
                    res.append((i,j))
        def convert(r1,c1):
            for i in range(c):
                m[r1][i]=0
            for i in range(r):
                m[i][c1]=0                           
        for i,j in res:
            convert(i,j)
