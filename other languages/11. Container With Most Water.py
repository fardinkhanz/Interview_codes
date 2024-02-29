class Solution:
    def maxArea(self, height: List[int]) -> int:
        l,r,maxi=0,len(height)-1,0

        while l<r:
            temp=min(height[l],height[r]) * (r-l)
            maxi=max(maxi,temp)
            if height[l] <= height[r]:
                l+=1
            elif height[l] > height[r]:
                r-=1   
        return maxi          

