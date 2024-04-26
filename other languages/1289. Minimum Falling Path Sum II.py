class Solution:
    def minFallingPathSum(self, grid: List[List[int]]) -> int:
        def small2(r):
            res=[]
            for val,i in r:
                if len(res)<2:
                    res.append((val,i))
                elif res[1][0] > val:
                    res.pop()
                    res.append((val,i))
                res.sort()    
            return res    
        n = len(grid)
        frst_row = [(val,idx) for idx, val in enumerate(grid[0])]
        dp=small2(frst_row)

        for r in range(1,n):
            n_dp=[]
            for cur in range(n):
                curval=grid[r][cur]
                minval=float("inf")
                for preval,prev in dp:
                    if prev!=cur:
                        minval=min(minval , preval + curval)
                n_dp.append((minval,cur))
                n_dp=small2(n_dp)
            dp=n_dp    
        return min([val for val, idx in dp])                


