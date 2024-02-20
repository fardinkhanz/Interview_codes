# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        if not lists:
            return None        
        def merge(l1,l2):
            dum=ListNode()
            temp=dum
            while l1 and l2:
                if l1.val<l2.val:
                    temp.next=l1
                    l1=l1.next
                else:
                    temp.next=l2
                    l2=l2.next
                temp=temp.next
             
            while l1:
                temp.next=l1
                l1=l1.next
                temp=temp.next

            while l2:
                temp.next=l2
                l2=l2.next
                temp=temp.next
            return dum.next        


    
        while len(lists) > 1:
            answer = []
            for i in range(0, len(lists), 2):
                left_arr = lists[i]
                if i+1 < len(lists):
                    right_arr = lists[i+1]
                else:
                    right_arr = None

                answer.append(merge(left_arr, right_arr))
            lists = answer
        return lists[0]

