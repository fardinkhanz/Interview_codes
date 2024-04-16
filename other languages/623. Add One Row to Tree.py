# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def addOneRow(self, root: Optional[TreeNode], val: int, depth: int) -> Optional[TreeNode]:
        if depth == 1:
            return TreeNode(val, root, None)

        curdp=1

        que=collections.deque([root])

        while que:
            if curdp==depth-1:
                break

            for _ in range(len(que)):
                node=que.popleft()

                if node.left:
                    que.append(node.left)
                if node.right:
                    que.append(node.right)
            curdp+=1

        for n in que:
            cleft=n.left
            n.left=TreeNode(val,cleft,None)

            cright=n.right
            n.right=TreeNode(val,None,cright)        

        return root    
