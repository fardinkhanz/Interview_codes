class Solution:
    def leftRightDifference(self, nums: List[int]) -> List[int]:
        left=[]
        right=[]
        res=[0]*len(nums)
        sum1=0
        for i in range(len(nums)):
            if i==0:
                left.append(0)
            else:
                sum1=nums[i-1]+sum1
                left.append(sum1)    
        for j in range(len(nums)):
            if j==len(nums)-1:
                right.append(0)
            else:
                sum2=0
                x=sum(nums[j+1:])
                right.append(x) 
        for k in range(len(nums)):
            res[k]=abs(left[k]-right[k])
        return res               
                
