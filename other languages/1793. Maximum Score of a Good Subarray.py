class Solution:
    def maximumScore(self, nums: List[int], k: int) -> int:
        left, right = k, k
        min_v = nums[k]
        max_v = min_v
        while left > 0 or right < len(nums) - 1 :
            if left == 0 or ( right < len(nums) - 1 and nums[right+1] > nums[left- 1] ):
                right+=1
            else:
                left-=1
            min_v=min(min_v,nums[left],nums[right])
            max_v=max(max_v,min_v*(right-left+1))
        return max_v            
        
