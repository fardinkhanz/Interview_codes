# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        fst=head
        slw=head
        while fst and fst.next:
            fst=fst.next.next
            slw=slw.next
        cur,prev=slw,None

        while cur:
            newn=cur.next
            cur.next=prev
            prev=cur
            cur=newn
        ft,lt=head,prev
        while ft and lt:
            if ft.val != lt.val:
                return False
            ft=ft.next
            lt=lt.next
        return True        

