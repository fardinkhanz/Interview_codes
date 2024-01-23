
class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        res = []

        def back(ans):
            if len(ans) == len(nums):
                res.append(ans.copy())
                return

            for num in nums:
                if num not in ans:
                    back(ans + [num])

        back([])
        return res
