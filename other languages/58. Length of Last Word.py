class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        l=[]
        l=s.split()
        return len(l[-1])
