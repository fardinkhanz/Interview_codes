class Solution:
    def makeGood(self, s: str) -> str:
        st=[]
        for i in range(len(s)):
            if st and st[-1]!=s[i] and st[-1].lower()==s[i].lower():
                st.pop()
            else:
                st.append(s[i])
           
        return ''.join(st)   

        
