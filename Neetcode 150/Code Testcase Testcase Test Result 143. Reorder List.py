# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        leftHead=head
        slow=head
        fast=head.next

        while fast and fast.next:
            slow=slow.next
            fast=fast.next.next
        
        rightHead=slow.next
        slow.next=None

        prev,curr=None,rightHead

        while curr:
            temp=curr.next
            curr.next=prev
            prev=curr
            curr=temp

        rightHead=prev
        while rightHead:
            leftTemp, rightTemp = leftHead.next, rightHead.next

            leftHead.next = rightHead
            rightHead.next = leftTemp

            leftHead = leftTemp
            rightHead = rightTemp
        

        return head   
