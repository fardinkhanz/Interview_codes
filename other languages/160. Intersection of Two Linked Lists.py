# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        ska,skb=['a'],['b']
        while headA or headB:
            if headA:
               ska.append(headA)
               headA=headA.next
            if headB:
               skb.append(headB)
               headB=headB.next
       
        prev = None

        while ska and skb:
            nodeA=ska.pop(-1)
            nodeB=skb.pop(-1) 
            if nodeA != nodeB:
                return prev
            prev=nodeA              

        
