# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        def dfs(root,max):
            if not root:
                return 0
            cnt=0    
            if max<=root.val:
                cnt=1
                max=root.val
            cnt+=dfs(root.left,max)
            cnt+=dfs(root.right,max)
            return cnt    


        return dfs(root,root.val)    
        
