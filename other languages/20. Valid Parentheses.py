class Solution:
    def isValid(self, s: str) -> bool:
        l=len(s)
        stack=[]

        for i in range(0,l):
            if len(stack)>0 and ((s[i]==')' and stack[-1]=='(') or (s[i]==']' and stack[-1]=='[') or(s[i]=='}' and stack[-1]=='{')):
                stack.pop()
            else:
                stack.append(s[i])

        return len(stack)== 0                
        
