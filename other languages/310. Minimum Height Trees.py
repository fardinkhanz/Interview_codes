class Solution:
    def findMinHeightTrees(self, n: int, edges: List[List[int]]) -> List[int]:
        if n==1:
            return [0]
        graph=defaultdict(list)
        for m,v in edges:
            graph[m].append(v)
            graph[v].append(m)
        edge = {}
        leave = deque()
        for src, connect in graph.items():
            if len(connect)==1:
                leave.append(src)
            edge[src]=len(connect)

        while leave:
            if n<=2:
                return list(leave)
            for i in range(len(leave)):
                node=leave.popleft()
                n-=1
                for j in graph[node]:
                    edge[j]-=1
                    if edge[j]==1:
                        leave.append(j)
