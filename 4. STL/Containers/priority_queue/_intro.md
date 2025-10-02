A **priority queue** in C++ STL is a type of container adaptor that stores elements in a way that allows constant-time access to the **highest-priority element**, and logarithmic-time insertion and removal. It’s built on top of a **heap** data structure, typically a **max-heap** by default.

### 🧠 Key Concepts

- **Header file**: `#include <queue>`
- **Default behavior**: Max-heap (largest element has highest priority)
- **Custom behavior**: Can be changed to min-heap or other schemes using a comparator

### 📦 Syntax

```cpp
std::priority_queue<T> pq; // Max-heap
std::priority_queue<T, std::vector<T>, std::greater<T>> pq; // Min-heap
```

- `T`: Type of elements
- `std::vector<T>`: Underlying container (default)
- `std::greater<T>`: Comparator for min-heap

### 🔧 Common Operations

| Operation        | Description                                                                 |
|------------------|-----------------------------------------------------------------------------|
| `push(x)`        | Inserts element `x`                                                         |
| `top()`          | Returns the highest-priority element                                        |
| `pop()`          | Removes the highest-priority element                                        |
| `empty()`        | Checks if the queue is empty                                                |
| `size()`         | Returns the number of elements                                              |

### 🧪 Example

```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(30);
    pq.push(10);
    pq.push(20);
    pq.push(40);

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}
```

**Output**: `40 30 20 10` — elements are removed in descending order of priority.

