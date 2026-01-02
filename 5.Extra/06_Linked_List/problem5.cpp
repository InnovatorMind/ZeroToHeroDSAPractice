// 1721. Swapping Nodes in a Linked List

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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        int pos = 0;

        ListNode* startNode = nullptr;
        while (temp) {
            pos++;
            if(pos == k) {
                startNode = temp;
            }
            temp = temp->next;
        }

        // cout << "pos:" << pos;
        int endK = pos - k + 1;
        // cout << "endK:" << endK;

        temp = head;
        while (endK > 1) {
            temp = temp->next;
            endK--;
        }
        int tempVal = startNode->val;
        startNode->val = temp->val;
        temp->val = tempVal;
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
    printList(sol.swapNodes(head,2));

    while (head) {
        ListNode *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}