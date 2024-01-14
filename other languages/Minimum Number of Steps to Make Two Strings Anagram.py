class Solution:
    def minSteps(self, s: str, t: str) -> int:
        cnt_s = [0] * 26
        cnt_t = [0] * 26

        for char in s:
            cnt_s[ord(char) - ord('a')] += 1
        for char in t:
            cnt_t[ord(char) - ord('a')] += 1

        steps = 0
        for i in range(26):
            steps += abs(cnt_s[i] - cnt_t[i])

        return steps//2            


        
        
