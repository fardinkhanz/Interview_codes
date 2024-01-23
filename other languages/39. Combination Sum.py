class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        res = []

        def back(start, s):
            if sum(s) == target:
                res.append(s.copy())
                return
            if sum(s) < target:
                for i in range(start, len(candidates)):
                    back(i, s + [candidates[i]])
            else:
                return

        back(0, [])
        return res
