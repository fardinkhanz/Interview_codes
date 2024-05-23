class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        st=[]
        op=['+','-','/','*']
        for i in tokens:
            if i not in op:
                st.append(int(i)) 
            else:
                res=0
                b=st.pop()
                a=st.pop()
                match i:
                    case '+':
                        res=a+b
                    case '-':
                        res=a-b
                    case '*':
                        res=a*b
                    case '/':
                        res=int(a/b)
                st.append(res)
        return st[0]                        

