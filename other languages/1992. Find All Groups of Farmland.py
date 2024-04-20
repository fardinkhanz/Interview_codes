class Solution:
    def findFarmland(self, land: List[List[int]]) -> List[List[int]]:
        res=[]
        r,c=len(land),len(land[0])
        v=set()
        def dfs(r1,c1):
            v.add((r1,c1))
            st=[(r1,c1)]
            minr,minc,maxr,maxc=r1,c1,r1,c1
            while st:
                curx,cury=st.pop()
                for dx,dy in [(-1,0),(1,0),(0,-1),(0,1)]:
                    nx,ny=curx+dx,cury+dy
                    if nx>=0 and ny>=0 and nx<r and ny<c and (nx,ny) not in v and land[nx][ny]==1:
                        v.add((nx,ny))
                        st.append((nx,ny))
                        minr,minc,maxr,maxc=min(minr,nx),min(minc,ny),max(maxr,nx),max(maxc,ny)
            return [minr,minc,maxr,maxc]                        

        for i in range(r):
            for j in range(c):
                if land[i][j]==1 and (i,j) not in v:
                   d=dfs(i,j)
                   res.append(d)    
        return res
