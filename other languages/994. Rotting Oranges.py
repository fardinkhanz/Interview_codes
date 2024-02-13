class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        rows,col=len(grid),len(grid[0])
        fresh=0
        rotten=deque()
        for r in range(rows):
            for c in range(col):
                if grid[r][c]==2:
                    rotten.append((r,c))
                elif grid[r][c]==1:    
                    fresh+=1
        minutes=0
        direc=[(1,0),(0,1),(0,-1),(-1,0)]

        while rotten and fresh:
            minutes+=1
            for i in range(len(rotten)):
                r1,c1=rotten.popleft()
                for dr,dc in direc:
                    r,c=r1+dr,c1+dc
                    if r in range(rows) and c in range(col) and grid[r][c]==1 :
                        grid[r][c]=2
                        fresh-=1
                        rotten.append((r,c))
        return minutes if fresh==0 else -1            



        
