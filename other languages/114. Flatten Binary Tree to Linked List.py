# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def flatten(self, root: Optional[TreeNode]) -> None:
        """
        Do not return anything, modify root in-place instead.
        """
        def dfs(root):
            if not root:
                return None
            left1=dfs(root.left)
            right1=dfs(root.right)

            if root.left:
                left1.right=root.right
                root.right=root.left
                root.left=None
            last = right1 or left1 or root
            return last
        return dfs(root)           
        
