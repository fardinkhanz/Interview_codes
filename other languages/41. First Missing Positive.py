class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        nums.sort()
        n=len(nums)
        if nums[0]>1 or nums[n-1]<=0:
           return 1
        for i in range(1,n):
            if nums[i-1]<0 and nums[i]>0 and nums[i]!=1:
                return 1
            if nums[i]-nums[i-1] > 1 and nums[i-1]>=0 and nums[i]>=0:
                return nums[i-1]+1
        return nums[n-1]+1     


                    
