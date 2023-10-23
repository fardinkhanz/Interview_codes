class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        if n==1:
            return True

        if n<=0:
            return False

        logarithmBase4 = math.log(n)/math.log(4)

        return (logarithmBase4 == int(logarithmBase4))
        
