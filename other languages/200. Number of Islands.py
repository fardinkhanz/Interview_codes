class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        rows,col=len(grid),len(grid[0])
        visit=set()
        islands=0
        def dfs(r,c):
            q=collections.deque()
            visit.add((r,c))
            q.append((r,c))

            while q:
                r1,c1=q.popleft()
                direction=[[0,1],[1,0],[-1,0],[0,-1]]
                for dr,dc in direction:
                    r,c=r1+dr,c1+dc
                    if  r in range(rows) and c in range(col) and grid[r][c] == '1' and (r,c) not in visit:
                        q.append((r,c))
                        visit.add((r,c))





        for r in range(rows):
            for c in range(col):
                if grid[r][c]=='1' and (r,c) not in visit:
                    dfs(r,c)
                    islands+=1
        return islands            



        
