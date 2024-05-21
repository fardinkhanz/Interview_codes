class Solution:
    def isValid(self, s: str) -> bool:
        ln=len(s)
        st=[]
        for i in range(ln):
            if st and ((s[i]==")" and st[-1]=="(") or (s[i]=="]" and st[-1]=="[") or(s[i]=="}" and st[-1]=="{")):
                st.pop()
            else:
                st.append(s[i])
        return not st           
