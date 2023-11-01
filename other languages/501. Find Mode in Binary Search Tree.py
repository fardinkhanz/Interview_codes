# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findMode(self, root: Optional[TreeNode]) -> List[int]:
        def inorder(node):
            nonlocal cur,cnt,max,modes
            if not node:
                return

            inorder(node.left)

            cnt = cnt + 1 if node.val == cur else 1
            cur = node.val

            if cnt > max:
                max=cnt
                modes=[cur]
            elif cnt == max:
                modes.append(cur)

            inorder(node.right)

        cur=None
        cnt=0
        max=0
        modes=[]
        inorder(root)
        return modes


        
