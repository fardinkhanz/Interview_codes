class Solution:
    def wonderfulSubstrings(self, word: str) -> int:
        count =[0]*1024
        res=0
        pre_xor=0
        count[pre_xor]=1
        for c in word:
            c_i=ord(c)-ord('a')
            pre_xor ^= 1<<c_i
            res+=count[pre_xor]
            for i in range(10):
                res+=count[pre_xor ^ (1<<i)]
            count[pre_xor]+=1
        return res           
