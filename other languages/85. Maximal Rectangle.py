class Solution:
    def maximalRectangle(self, matrix: List[List[str]]) -> int:
        if not matrix:
            return 0
        ans=0
        histo=[0]*len(matrix[0])

        def lare(histo: List[int]) -> int:
            ans=0
            st=[]

            for i in range(len(histo)+1):
                while st and (i==len(histo) or histo[st[-1]] > histo[i] ):
                    h=histo[st.pop()]
                    w=i-st[-1]-1 if st else i
                    ans = max(ans,h*w)
                st.append(i)
            return ans        


        for r in matrix:
            for i, num in enumerate(r):
                histo[i]=0 if num=='0' else histo[i]+1
            ans=max(ans,lare(histo))
        return ans            

            
