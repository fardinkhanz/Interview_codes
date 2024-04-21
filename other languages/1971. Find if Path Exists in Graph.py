class Solution:
    def validPath(self, n: int, edges: List[List[int]], source: int, destination: int) -> bool:
        graph=collections.defaultdict(list)
        for i,j in edges:
            graph[i].append(j)
            graph[j].append(i)
        v=set()
        def dfs(n,v):
            if n==destination:
                return True
            v.add(n)
            for adj in graph[n]:
                if adj not in v:
                    if dfs(adj,v):
                        return True
            return False                 
        return dfs(source,v)
