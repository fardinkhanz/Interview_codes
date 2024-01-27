class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        l,r=0,len(nums)-1
        last,first=-1,-1

        while l<=r:
            m=l+(r-l)//2
            if nums[m]==target:
                first=m
                last=m
                while first > 0 and nums[first-1]==target: 
                    first-=1
                while last < len(nums)-1 and nums[last+1]==target:
                    last+=1
                return [first,last]
            elif target > nums[m]:
                l=m+1
            else:
                r=m-1
        return [first,last]                

        
