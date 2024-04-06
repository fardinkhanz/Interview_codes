class Solution:
    def minRemoveToMakeValid(self, s: str) -> str:
        st=[]
        cnt=0
        for i in s:
            if i=='(':
                cnt+=1

            if i==')':
                if cnt == 0:
                    continue
                cnt-=1    
            st.append(i)
                  

    
        res=""
        while st:
            c=st.pop()
            if cnt>0 and c=='(':
                cnt-=1
            else:
                res+=c    

        return res[::-1]         
                    
    



        
