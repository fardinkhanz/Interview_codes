class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
        l,res,pro=0,0,1

        for r in range(len(nums)):
            pro*=nums[r]
            while l<=r and pro>=k:
                pro//=nums[l]
                l+=1
         
            res+=1+(r-l)    
        return res    
        
