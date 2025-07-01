**`stack`** in C++ — a super useful STL container for LIFO (Last In, First Out) operations. It's commonly used in:

* Expression evaluation (e.g., postfix/infix)
* Undo operations
* Recursion emulation
* Balanced parentheses checking
* Tree/graph traversals (like DFS)

---

## 🔹 What is `std::stack`?

`std::stack` is a **container adapter** that gives you LIFO (Last In First Out) behavior — i.e., the last element pushed is the first one popped.

---

### 🔸 Header File:

```cpp
#include <stack>
```

---

### 🔸 Syntax:

```cpp
std::stack<int> s;
```

---

## 🔹 Common Stack Functions:

| Function    | Description                          |
| ----------- | ------------------------------------ |
| `push(val)` | Push an element onto the top         |
| `pop()`     | Remove the top element               |
| `top()`     | Access the top element               |
| `empty()`   | Returns `true` if the stack is empty |
| `size()`    | Returns the number of elements       |

---

### ✅ Example Code:

```cpp
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;  // 30

    s.pop();
    cout << "After pop, top: " << s.top() << endl;  // 20

    cout << "Stack size: " << s.size() << endl;

    return 0;
}
```

---

## 🔄 Behind the Scenes:

* `std::stack` is an **adapter** — by default, it uses `std::deque` as its underlying container.
* But you can also use `vector` or `list`:

```cpp
std::stack<int, std::vector<int>> s;
```

---

## ⚔️ Common Interview/DSA Problems Using Stack:

1. ✅ Balanced parentheses
2. ✅ Next Greater Element
3. ✅ Stock Span Problem
4. ✅ Reverse a stack
5. ✅ Evaluate postfix expression
6. ✅ Infix to postfix conversion

