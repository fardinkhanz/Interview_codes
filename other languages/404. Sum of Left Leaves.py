# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumOfLeftLeaves(self, root: Optional[TreeNode]) -> int:
        

        def dfs(root,l):
            if not root:
                return 0

            if not root.right and not root.left and l:
                return root.val


            return dfs(root.left,True)+dfs(root.right,False)
            
            return root.val
        
        return dfs(root,False)    
