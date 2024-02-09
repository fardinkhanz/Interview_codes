class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        if numRows == 0:
            return []
        if numRows ==1:
            return [[1]]

        prevs=self.generate(numRows-1)
        prev=prevs[-1]
        current=[1]

        for i in range(1,numRows-1):
            current.append(prev[i-1]+prev[i])
        current.append(1)
        prevs.append(current)
        return prevs        
        
