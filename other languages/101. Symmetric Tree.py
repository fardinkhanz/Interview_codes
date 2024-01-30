# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        def mirror(lroot,rroot):
            if not lroot and not rroot:
                return True
            if not lroot or not rroot or lroot.val != rroot.val:
                return False
            return mirror(lroot.left,rroot.right) and mirror(lroot.right,rroot.left)
        return mirror(root,root)             

        
