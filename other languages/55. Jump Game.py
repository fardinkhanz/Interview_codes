class Solution:
    def canJump(self, nums: List[int]) -> bool:
        l=r=0
        while r<len(nums)-1:
            far=0
            for i in range(l,r+1):
                far=max(far,nums[i]+i)
            if far==r:
                return False
            l=r+1
            r=far

        return True

            



        
