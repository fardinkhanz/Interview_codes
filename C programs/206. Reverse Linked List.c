/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL)
    {
        return head;
    }
struct ListNode* front=NULL;
struct ListNode* cur=head;
struct ListNode* prev=NULL;
    while(front!=NULL && front->next!=NULL)
    {
        front=cur->next;
        cur->next=prev;
        prev=cur;
        cur=front;


    }
    head=prev;
    return head;

}
