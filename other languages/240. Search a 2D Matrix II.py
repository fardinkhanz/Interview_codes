class Solution:
    def searchMatrix(self, m: List[List[int]], target: int) -> bool:
        r, c = len(m), len(m[0])
        
        def find(i, j):
         
            if i >= r or j < 0 or i < 0 or j >= c:
                return False 
            
          
            if m[i][j] == target:
                return True
            
         
            if m[i][j] > target:
                return find(i - 1, j)
       
            if m[i][j] < target:
                return find(i, j + 1)
      
        return find(r-1, 0)
