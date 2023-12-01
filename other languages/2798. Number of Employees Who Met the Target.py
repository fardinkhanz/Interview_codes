class Solution:
    def numberOfEmployeesWhoMetTarget(self, hours: List[int], target: int) -> int:
        cnt=0
        for i in range(len(hours)):
            if hours[i] >= target:
                cnt+=1
        return cnt
