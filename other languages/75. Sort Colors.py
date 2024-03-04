class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        r=nums.count(0)
        w=nums.count(1)
        b=nums.count(2)
        res = [0]*r + [1]*w + [2]*b

        for i in range(len(nums)):
            nums[i]=res[i]
        
