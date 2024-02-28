class Solution:
    def decodeString(self, s: str) -> str:
        stack,curnum,curstr=[],0,''
        for c in s:
            if c=='[':
                stack.append((curstr,curnum))
                
                curstr,curnum='',0
            elif c==']':
                prevstr,num = stack.pop()
                curstr=prevstr+num*curstr
            elif c.isdigit():
                curnum=curnum*10+int(c)
            else:
                curstr+=c 
        return curstr                   
