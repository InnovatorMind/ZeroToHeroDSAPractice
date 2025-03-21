// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */


 ListNode* insertAtEnd(ListNode* head, int value) {
    ListNode* newNode = new ListNode(value);
    
    if (head == nullptr) {
        return newNode;
    }
    
    ListNode* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    
    temp->next = newNode;
    return head;
}



class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int temp;
        int cap = 0;
        int l1Val;
        int l2Val;

        ListNode* head = nullptr; 
        while(l1 != nullptr || l2 != nullptr) {
            // cout << l1->val <<" ";
            // cout << l2->val <<" ";

            if(l1 != nullptr) {
                l1Val = l1->val;
            } else {
                l1Val = 0;
            }

            if(l2 != nullptr) {
                l2Val = l2->val;
            } else {
                l2Val = 0;
            }

              temp = l1Val + l2Val;
              temp = temp + cap;
              cap = 0;
              if(temp/10!=0) {
                // cout << "temp%10" << temp%10 << " ";
                cap = temp/10;
                temp = temp%10;
              }

              head = insertAtEnd(head, temp);
              cout << temp <<endl;

            if(l2 != nullptr) {
              l2 = l2-> next;
            }
            if(l1 != nullptr) {
              l1 = l1-> next;
            }
            if(l1 == nullptr && l2 == nullptr) {
                if(cap!=0) {
                  cout << cap <<endl;
                  head = insertAtEnd(head, cap);
                }
            }
        }


    return head; 
    }
};