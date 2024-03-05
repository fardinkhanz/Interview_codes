class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        nums.sort()
        if len(nums) == 1:
            return nums[0]
        for i in range(len(nums)):
            if (i==0 and nums[i]!=nums[i+1]) or (i==len(nums)-1 and nums[i]!=nums[i-1]) or (nums[i] != nums[i+1] and nums[i] != nums[i-1]):
                return nums[i]


