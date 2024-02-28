class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        stack=[]
        maxarea=0

        for i,h in enumerate(heights):
            start=i
            while start and stack[-1][1] > h:
                index,height=stack.pop()
                maxarea=max(maxarea, (i-index) * height)
                start=index
            stack.append((start,h))

        for index, height in stack:
            maxarea = max(maxarea,  (len(heights) - index) * height )

        return maxarea            

        
