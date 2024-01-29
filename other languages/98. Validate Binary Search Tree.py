# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        def check(root,max,min):
            if not root:
                return True
            if root.val >= max or root.val <= min:
                return False
            return (check(root.left,root.val,min) and check(root.right,max,root.val))        
        return check(root,float("inf"),float("-inf"))
