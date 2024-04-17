# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def smallestFromLeaf(self, root: Optional[TreeNode]) -> str:
        def dfs(root,s):
            if not root:
                return
            s=chr(ord('a') + root.val) + s

            if root.right and root.left:
                return min(dfs(root.right,s),dfs(root.left,s))

            if root.right:
                return dfs(root.right,s)
            if root.left:
                return dfs(root.left,s)
            return s
        return dfs(root,"")                    
