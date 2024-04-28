class Solution:
    def sumOfDistancesInTree(self, n: int, edges: List[List[int]]) -> List[int]:
        g=collections.defaultdict(set)
        for i,j in edges:
            g[i].add(j)
            g[j].add(i)
        count=[1]*n
        ans=[0]*n
        def helper(node,parent=None):
            for child in g[node]:
                if child==parent:
                    continue
                helper(child,node)
                count[node]+=count[child]
                ans[node]+=ans[child]+count[child]
        def helper2(node,parent=None):
            for child in g[node]:
                if child==parent:
                    continue
                ans[child]=ans[node]-count[child]+(n-count[child])
                helper2(child,node)        
 
        helper(0)
        helper2(0) 

        return ans 
