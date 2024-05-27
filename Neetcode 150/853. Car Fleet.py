class Solution:
    def carFleet(self, tar: int, pos: List[int], speed: List[int]) -> int:
        st,pair=[],[]
        n=len(pos)
        
        for i in range(n):
            pair.append([pos[i],speed[i]])
        pair=sorted(pair)[::-1]

        for p,s in pair:
            t=(tar-p)/s
            st.append(t)
            if len(st)>1 and st[-2] >= st[-1]:
                st.pop()
                
        return len(st)        
            

        
