# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def averageOfSubtree(self, root: Optional[TreeNode]) -> int:
        res=0

        def post(node):
            if not node:
                return (0,0)

            left = post(node.left)
            right = post(node.right)

            nonlocal res

            total = left[0] + right[0] + node.val
            cnt = 1 + left[1] + right[1]
            res += (node.val == total//cnt)

            return (total,cnt)

        post(root)

        return res        
        
