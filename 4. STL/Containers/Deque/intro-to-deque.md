## 🔹 What is `deque`?

`deque` stands for **Double-Ended Queue**.

It's a **sequence container** like `vector` or `list`, but it allows **insertion and deletion from both ends** with **constant time complexity**.

---

### 🔸 Header File:

```cpp
#include <deque>
```

---

### 🔹 Syntax:

```cpp
std::deque<int> dq;
```

---

## 🔹 Key Features:

| Feature           | Description                                    |
| ----------------- | ---------------------------------------------- |
| Dynamic size      | Like vector                                    |
| Fast at both ends | O(1) push/pop at front and back                |
| Random access     | Supports `[]` like vector                      |
| Contiguous blocks | Not fully contiguous like vector but partially |

---

## 🔹 Common Functions:

| Function          | Description                 |
| ----------------- | --------------------------- |
| `push_back(val)`  | Add to end                  |
| `push_front(val)` | Add to front                |
| `pop_back()`      | Remove from end             |
| `pop_front()`     | Remove from front           |
| `front()`         | First element               |
| `back()`          | Last element                |
| `size()`          | Number of elements          |
| `clear()`         | Remove all elements         |
| `at(i)` / `[i]`   | Access element at index `i` |

---

## 🔹 Example:

```cpp
#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(10);   // 10
    dq.push_front(5);   // 5 10
    dq.push_back(20);   // 5 10 20

    dq.pop_front();     // 10 20

    for (int x : dq) {
        cout << x << " ";
    }

    return 0;
}
```

### 🧾 Output:

```
10 20
```

---

## 🔍 When to Use `deque`

| Use `deque` when...                      |
| ---------------------------------------- |
| You need random access **and**           |
| Fast insert/remove from **both ends**    |
| `vector` is not fast at front insertions |

---

## 🔄 Comparison Table

| Feature       | `vector`   | `list`    | `deque`    |
| ------------- | ---------- | --------- | ---------- |
| Random Access | ✅ Yes      | ❌ No      | ✅ Yes      |
| Insert Front  | ❌ Slow     | ✅ Fast    | ✅ Fast     |
| Insert End    | ✅ Fast     | ✅ Fast    | ✅ Fast     |
| Memory        | Contiguous | Scattered | Block-wise |

---

Would you like a **practice problem using `deque`** next?
