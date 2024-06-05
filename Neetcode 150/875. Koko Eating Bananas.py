class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        least, most=1,max(piles)
        minspeed=-1
        while least<=most:
            speed=least+(most-least)//2
            totalhours=0

            for p in piles:
                totalhours += math.ceil(p / speed)
            if totalhours<=h:
                minspeed=speed
                most=speed-1
            else:
                least=speed+1
        return minspeed            

                
