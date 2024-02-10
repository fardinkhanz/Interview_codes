class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        res=max(nums)
        cmax,cmin=1,1

        for i in nums:
            temp=cmax*i
            cmax=max(cmax*i,cmin*i,i)
            cmin=min(temp,cmin*i,i)
            res=max(res,cmax)
        return res    

        
