class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        
        l,r=0,len(matrix)-1
        def binary(col):
            l2,r2=0,len(col)-1
            while l2<=r2:
                m2=l2+(r2-l2)//2
                if target == col[m2]:
                    return True
                elif target > col[m2]:
                    l2=m2+1
                else:
                    r2=m2-1
            return False
        while l<=r:
            m =l+(r-l)//2
            if matrix[m][0] <= target and matrix[m][-1] >= target:
                col=matrix[m]
                return binary(col)
            elif matrix[m][0]>target:
                r=m-1
            else:
                l=m+1
        return False                
