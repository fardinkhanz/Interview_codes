/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int pairSum(struct ListNode* head){
 if(head==NULL || head->next==NULL)
 {
     return head;;
 }
   int v[100000];
    int idx = 0;
    while (head) {
        v[idx++] = head->val;
        head = head->next;
    }

    int ans = 0;
    for (int i = 0; i < idx; i++) {
        ans = (ans > (v[i] + v[idx - 1 - i])) ? ans : (v[i] + v[idx - 1 - i]);
    }
    return ans;



}
