class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res=[]
        m=2*n
       
        def back(l,r,app):
            if m == len(app):
                res.append(app)
                return
            if l < n:
                back(l+1,r,app+'(')
            if r < l:
                back(l,r+1,app+')')  
        back(0,0,'')
        return res        

        
