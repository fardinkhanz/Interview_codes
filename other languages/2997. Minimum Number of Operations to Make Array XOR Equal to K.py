class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        xor=0
        for i in nums:
            xor ^= i
        cnt=0
        while k or xor:
            if k%2 != xor%2:
                cnt+=1
            k//=2
            xor//=2
        return cnt            
