class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        indegree=[0]*numCourses
        adj=[[] for _ in range(numCourses)]

        for prereq in prerequisites:
            adj[prereq[1]].append(prereq[0])
            indegree[prereq[0]]+=1
        que=[]
        for i in range(numCourses):
            if indegree[i]==0:
                que.append(i)

        visit=0
        while que:
            node=que.pop()
            visit+=1
            for neighbor in adj[node]:
                indegree[neighbor]-=1
                if indegree[neighbor]==0:
                    que.append(neighbor)
        return visit==numCourses            


        
