#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* dummyHead = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* current = dummyHead;
    int carry = 0;

    while (l1 || l2) {
        int sum = carry;

        if (l1) {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2) {
            sum += l2->val;
            l2 = l2->next;
        }

        carry = sum / 10;
        sum %= 10;

        current->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        current->next->val = sum;
        current->next->next = NULL;
        current = current->next;
    }

    if (carry > 0) {
        current->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        current->next->val = carry;
        current->next->next = NULL;
    }

    struct ListNode* result = dummyHead->next;
    free(dummyHead);
    return result;
}

// Function to create a new linked list node with the given value
struct ListNode* newNode(int val) {
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

// Function to print a linked list
void printList(struct ListNode* head) {
    while (head) {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}

int main() {
    // Input: l1 = [2,4,3], l2 = [5,6,4]
    struct ListNode* l1 = newNode(2);
    l1->next = newNode(4);
    l1->next->next = newNode(3);

    struct ListNode* l2 = newNode(5);
    l2->next = newNode(6);
    l2->next->next = newNode(4);

    struct ListNode* result = addTwoNumbers(l1, l2);
    printList(result); // Output: [7,0,8]

    // Free the memory allocated for the linked lists
    struct ListNode* temp;
    while (l1) {
        temp = l1;
        l1 = l1->next;
        free(temp);
    }

    while (l2) {
        temp = l2;
        l2 = l2->next;
        free(temp);
    }

    while (result) {
        temp = result;
        result = result->next;
        free(temp);
    }

    return 0;
}
