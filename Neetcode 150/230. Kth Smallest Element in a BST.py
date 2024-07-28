# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        t=0
        s=[]
        while root or s:
            while root:
                s.append(root)
                root=root.left
            t+=1
            root=s.pop()   
            if t==k:
                return root.val
            root=root.right     
        

        
