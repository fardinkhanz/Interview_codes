# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        temp=0
        s=[]
        while root or s:
            while root:
                s.append(root)
                root=root.left
            root=s.pop()
            temp+=1
            if k==temp:
                return root.val
            root=root.right
                    
        

        
