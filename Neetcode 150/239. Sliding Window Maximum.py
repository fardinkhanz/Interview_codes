class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        d=deque()
        n=len(nums)
        res=[]
        l,r=0,0
        while r < n:
            while d and nums[d[-1]] < nums[r]:
                d.pop()
            d.append(r)

            if l>d[0]:
                d.popleft()

            if r+1 >= k:
                res.append(nums[d[0]])
                l+=1
            r+=1
        return res        
              


        
