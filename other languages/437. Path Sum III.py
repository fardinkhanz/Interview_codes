# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def pathSum(self, root: Optional[TreeNode], targetSum: int) -> int:
        if not root:
            return 0
        total = self.dfs(root, targetSum)
        total += self.pathSum(root.left, targetSum)
        total += self.pathSum(root.right, targetSum)
        return total

    def dfs(self, root, sum1):
        count = 0
        if not root:
            return count
        if sum1 == root.val:
            count += 1
        count += self.dfs(root.left, sum1 - root.val)
        count += self.dfs(root.right, sum1 - root.val)
        return count
