class Solution:
    def trap(self, h: List[int]) -> int:
        if not h:
            return 0
        lm,rm=0,0
        l,r=0,len(h)-1
        water=0
        while l<r:
            if h[l]<h[r]:
                if h[l]>lm:
                    lm=h[l]
                else:
                    water+=lm-h[l]
                l+=1    
            else:
                if h[r]>rm:
                    rm=h[r]
                else:
                    water+=rm-h[r]
                r-=1
        return water                           
        
