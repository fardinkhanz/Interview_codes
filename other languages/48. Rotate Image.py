class Solution:
    def rotate(self, m: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        row=len(m)

        for i in range(row):
            for j in range(i):
                m[j][i],m[i][j]=m[i][j],m[j][i]
        for i in range(row):
            m[i].reverse()
