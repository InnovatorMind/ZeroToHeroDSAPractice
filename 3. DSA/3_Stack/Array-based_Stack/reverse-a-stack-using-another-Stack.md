## ✅ **Problem Statement:**
You are given a stack (array-based). Write a program to reverse the elements **using another stack**.

Example:
```
Original Stack (top to bottom): 50 40 30 20 10
Reversed Stack (top to bottom): 10 20 30 40 50
```

---

## ✅ **Step-by-Step Plan:**
1. Create two stacks: `stack1` and `stack2`
2. Push some elements into `stack1`
3. Pop elements one by one from `stack1` and push them into `stack2`
4. Now, `stack2` contains the reversed stack
5. Display `stack2`

---

## ✅ **Code Implementation:**
```cpp
#include <iostream>
using namespace std;

#define MAX 5
int stack1[MAX];
int stack2[MAX];
int top1 = -1, top2 = -1;

// Push into stack
void push(int stack[], int &top, int value) {
    if (top >= MAX - 1) {
        cout << "Stack Overflow!" << endl;
    } else {
        stack[++top] = value;
    }
}

// Pop from stack
int pop(int stack[], int &top) {
    if (top < 0) {
        cout << "Stack Underflow!" << endl;
        return -1;
    } else {
        return stack[top--];
    }
}

// Display stack
void display(int stack[], int top) {
    if (top < 0) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack (top to bottom): ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Push elements into stack1
    push(stack1, top1, 10);
    push(stack1, top1, 20);
    push(stack1, top1, 30);
    push(stack1, top1, 40);
    push(stack1, top1, 50);

    cout << "Original Stack1:" << endl;
    display(stack1, top1);

    // Reverse stack1 into stack2
    while (top1 >= 0) {
        int val = pop(stack1, top1);
        push(stack2, top2, val);
    }

    cout << "\nReversed Stack2:" << endl;
    display(stack2, top2);

    return 0;
}
```

---

## ✅ **Output:**
```
Original Stack1:
Stack (top to bottom): 50 40 30 20 10 

Reversed Stack2:
Stack (top to bottom): 10 20 30 40 50 
```

---
