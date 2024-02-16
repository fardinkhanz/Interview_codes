class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        tab=set(nums)
        maxx=0
        for i in nums:
            x=i-1
            curr=0
            if x not in tab:
                while x+1 in tab:
                    curr +=1
                    x+=1
                maxx=max(maxx,curr)
        return maxx            


        
