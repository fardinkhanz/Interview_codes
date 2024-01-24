class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        res=[]
        

        def back(i,ans):
            if i >= len(nums):
                res.append(ans.copy())
                return
            ans.append(nums[i])
            back(i+1,ans)

            ans.pop()
            back(i+1,ans)

        back(0,[])       
        return res


