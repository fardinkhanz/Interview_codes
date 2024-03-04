class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort(key=lambda x:x[0])
        mergd=[]
        for i in intervals:
            if not mergd or mergd[-1][1] < i[0]:
                mergd.append(i)
            else:
                mergd[-1][1]=max(i[1],mergd[-1][1])
        return mergd            



        
