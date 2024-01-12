class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        vowels = set(['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'])
        cnt=0
        mid = len(s)//2

        for i in range(mid):
            chara=s[i]
            charb=s[mid+i]
            if chara in vowels:
                cnt+=1
            if charb in vowels:
                cnt-=1

        return cnt == 0            
