class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        n=len(nums)
        dp=[1]*n
        for i in range(n-1,-1,-1):
            for j in range(i+1,n):
                if nums[i] < nums[j]:
                    dp[i]=max(dp[i],dp[j]+1)
        return max(dp)

#O(n^2) time complexity



class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        lst = []
        for num in nums:
            i = bisect_left(lst, num)
            
            if i == len(lst):
                lst.append(num)
            
            else:
                lst[i] = num
        
        return len(lst)
#O(n*logn) time complexity                    
                
            
            
