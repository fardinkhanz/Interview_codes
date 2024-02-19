# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        head=ListNode()
        current=head
        carry=0
        while l1 is not None or l2 is not None or carry != 0:
            val1=l1.val if l1 else 0
            val2=l2.val if l2 else 0

            sum1=val1+val2+carry
            current.next=ListNode(sum1 % 10)
            carry=sum1//10
            l1=l1.next if l1 else None
            l2=l2.next if l2 else None
            current=current.next
        return head.next    
        
