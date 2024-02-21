# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
    
        dum=head
             
        cnt=0
        while dum:
            dum=dum.next
            cnt+=1
        if cnt<k:
           return head
        prev=None
        cur=head   

        for _ in range(k):
            nextn=cur.next
            cur.next=prev
            prev=cur
            cur=nextn
       
        head.next=self.reverseKGroup(cur,k)

        return prev    



        
