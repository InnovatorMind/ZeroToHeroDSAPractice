#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void display(ListNode* start) {
    ListNode* current = start;
    while (current != NULL) {
        cout << "Address of node: " << current << " | ";
        cout << "Value of num: " << current->val << " | ";
        cout << "Address of next: " << current->next << " | ";
        cout << endl;
        current = current->next;
    }
};

int main()
{
    ListNode* first = new ListNode(5);
    ListNode* second = new ListNode(4);
    ListNode* third = new ListNode(3);
    
    ListNode* head = first;
    // first->next = second;
    // second->next = third;
    // display(head);
    
    
    // cout << head << " " << first <<endl;
    cout << head->val << " " << first->val <<endl;
    head->val = 6;
    cout << head->val << " " << first->val <<endl;


    ListNode dummy(5);
    ListNode dummy2 = dummy;
    cout << &dummy << " " << dummy.val <<endl;
    cout << &dummy2 << " " << dummy2.val <<endl;


 return 0;
}