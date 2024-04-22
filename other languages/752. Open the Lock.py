class Solution:
    def openLock(self, deadends: List[str], target: str) -> int:
        if "0000" in deadends:
            return -1
        q=deque()
        q.append(["0000",0])
        v=set(deadends)
        def children(cur):
            ans=[]
            for i in range(4):
                d=str((int(cur[i])+1)%10)
                ans.append(cur[:i]+d+cur[i+1:])
                d=str((int(cur[i])+9)%10) #int(cur[i])-1+10
                ans.append(cur[:i]+d+cur[i+1:])
            return ans    

        while q:
            cur,turn=q.popleft()
            if cur==target:
                return turn
            for c in children(cur):
                if c not in v:
                    v.add(c)
                    q.append([c,turn+1])    
        return -1        
