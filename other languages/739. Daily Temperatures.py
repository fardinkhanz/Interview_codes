class Solution:
    def dailyTemperatures(self, temp: List[int]) -> List[int]:
        n=len(temp)
        ans,stack=[0]*n,[n-1]
        if n==1: return [0]
        for i in range(n-2,-1,-1):
            while stack and temp[i]>=temp[stack[-1]]:
                stack.pop()
            if stack:
                ans[i]=stack[-1]-i
            stack.append(i)
        return ans            
 
        
