class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        l=len(nums)
        res=[1]*l
        pre,post=1,1
        for i in range(l):
            res[i]*=pre
            pre*=nums[i]
            res[l-i-1]*=post
            post*=nums[l-i-1]
        return res    
        
