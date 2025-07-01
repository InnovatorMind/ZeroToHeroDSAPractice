## 🔹 What is `std::queue`?

`std::queue` is a **FIFO (First In, First Out)** container adapter in STL.
It works just like a real-life queue — elements are inserted at the **back**, and removed from the **front**.

---

### 🔸 Header File:

```cpp
#include <queue>
```

---

### 🔸 Basic Syntax:

```cpp
std::queue<int> q;
```

---

## 🔹 Common Operations

| Function    | Description                                      |
| ----------- | ------------------------------------------------ |
| `q.push(x)` | Insert element at the back                       |
| `q.pop()`   | Remove element from the front                    |
| `q.front()` | Access the front element                         |
| `q.back()`  | Access the last element (at the back)            |
| `q.size()`  | Get the number of elements                       |
| `q.empty()` | Check if queue is empty (returns `true`/`false`) |

---

### ✅ Example Code:

```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl;  // 10
    cout << "Back: " << q.back() << endl;    // 30

    q.pop(); // removes 10

    cout << "After pop, front: " << q.front() << endl; // 20

    cout << "Queue size: " << q.size() << endl;

    return 0;
}
```

---

## 🔧 Use Cases in DSA

| Use Case                       | Why `queue` works well               |
| ------------------------------ | ------------------------------------ |
| **Breadth-First Search (BFS)** | Queue processes nodes level-by-level |
| **Producer-Consumer problems** | Manage data flow between threads     |
| **Task scheduling**            | Process jobs in the order received   |
| **Cache eviction (FIFO)**      | Replace oldest item first            |

---

## 🔄 Behind the Scenes:

By default, `std::queue` uses `std::deque` internally.

---

