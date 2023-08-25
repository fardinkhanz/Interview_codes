# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import deque
class Solution(object):
    def rightSideView(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        rightv,q=[],deque()
        if root:
            q.append(root)
        while len(q):
            rightv.append(q[-1].val)
            for i in range(len(q)):
                top=q.popleft()
                if top.left:
                    q.append(top.left)
                if top.right:
                    q.append(top.right)    
        return rightv            
