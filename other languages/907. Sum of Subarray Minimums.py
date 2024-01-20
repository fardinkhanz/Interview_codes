class Solution:
    def sumSubarrayMins(self, arr: List[int]) -> int:
        mod=10**9+7
        stack=[-1]
        arr.append(0)
        res=0
        for i, val in enumerate(arr):
            while stack and arr[stack[-1]]>val:
                index=stack.pop()
                left=index-stack[-1]
                right=i-index
                res+=(right*left*arr[index])%mod
            stack.append(i)
        return res%mod        


        
