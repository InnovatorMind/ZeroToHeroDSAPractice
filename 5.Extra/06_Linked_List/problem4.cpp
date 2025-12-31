// 328. Odd Even Linked List

#include<iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Helper to print the list
void printList(ListNode *head) {
    while (head)
    {
        cout << head->val;
        if (head->next)
            cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// ================================================================

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode *oddIndex = head;
        ListNode *evenIndex = head->next;
        ListNode *evenHead = evenIndex;

        while(evenIndex && evenIndex->next) {
            oddIndex->next = evenIndex->next;
            oddIndex=oddIndex->next;

            evenIndex->next=oddIndex->next;
            evenIndex=evenIndex->next;
        }

        oddIndex->next=evenHead;
        return head;
    }
};

// ================================================================


int main()
{
    cout << "Woopsy doopsy!!" << endl;
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original list: ";
    printList(head);

    Solution sol;
    // sol.middleNode(head->next);

    cout << "->: ";
    printList(sol.oddEvenList(head));

    while (head) {
        ListNode *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}