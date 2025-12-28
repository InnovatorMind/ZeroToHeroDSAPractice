// 237. Delete Node in a Linked List

#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
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




// ====================== My Solution =============================

class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        // eazyyyyyyyyyyyyyyy
        ListNode *nextNode = node->next;
        node->val = node->next->val;
        node->next = nextNode->next;
        delete nextNode;
    }
};

// ===========================================================





int main()
{
    cout << "Woopsy doopsy!!" << endl;
    ListNode *head = new ListNode(4);
    head->next = new ListNode(5);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(9);

    cout << "Original list: ";
    printList(head);

    Solution sol;
    sol.deleteNode(head->next);

    cout << "After deleting 5: ";
    printList(head);

    while (head) {
        ListNode *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}