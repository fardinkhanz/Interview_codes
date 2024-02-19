# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        temp=ListNode(0)
        temp.next=head
        f=temp
        l=temp

        for _ in range(n+1):
            f=f.next

        while f:
            f=f.next
            l=l.next
        l.next=l.next.next
        return temp.next    

