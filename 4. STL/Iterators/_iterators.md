In C++, **iterators** are objects that allow you to **traverse** containers (like `vector`, `list`, `map`, etc.) in a uniform way. They act like pointers and can be used to access elements inside STL containers.

---

### 🔹 Types of Iterators

C++ STL provides **5 categories** of iterators:

| Iterator Type              | Description                                                        |
| -------------------------- | ------------------------------------------------------------------ |
| **Input Iterator**         | Can read data once in a single-pass (e.g., `istream_iterator`)     |
| **Output Iterator**        | Can write data once (e.g., `ostream_iterator`)                     |
| **Forward Iterator**       | Can read/write, can go forward (e.g., `forward_list::iterator`)    |
| **Bidirectional Iterator** | Forward and backward (e.g., `list::iterator`, `set::iterator`)     |
| **Random Access Iterator** | Jump to any position (e.g., `vector::iterator`, `deque::iterator`) |

---

### 🔹 Common Iterator Operations

Let’s use a `vector<int>` to show basic usage:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {10, 20, 30, 40};

    // Declare iterator
    vector<int>::iterator it;

    // Traverse using iterator
    for (it = nums.begin(); it != nums.end(); ++it) {
        cout << *it << " ";  // Dereferencing iterator gives element
    }

    return 0;
}
```

---

### 🔹 Shortcuts with `auto`

Instead of writing `vector<int>::iterator`, use:

```cpp
for (auto it = nums.begin(); it != nums.end(); ++it) {
    cout << *it << " ";
}
```

---

### 🔹 Reverse Iterator

To iterate **backwards**:

```cpp
for (auto rit = nums.rbegin(); rit != nums.rend(); ++rit) {
    cout << *rit << " ";
}
```

---

### 🔹 Constant Iterator

Prevents modification of elements:

```cpp
for (vector<int>::const_iterator cit = nums.begin(); cit != nums.end(); ++cit) {
    cout << *cit << " ";
    // *cit = 100; // ❌ Error
}
```

---

### 🔹 Range-based `for` Loop (uses iterators internally)

```cpp
for (int num : nums) {
    cout << num << " ";
}
```

---

### 🔹 STL Algorithms with Iterators

```cpp
#include <algorithm>
auto it = find(nums.begin(), nums.end(), 30);
if (it != nums.end()) {
    cout << "Found at index: " << it - nums.begin();
}
```

---

### 🔹 Summary

| Operation       | Meaning                          |
| --------------- | -------------------------------- |
| `begin()`       | Points to first element          |
| `end()`         | Points **past** the last element |
| `rbegin()`      | Reverse begin                    |
| `rend()`        | Reverse end                      |
| `*it`           | Dereference to access value      |
| `it++` / `++it` | Move to next element             |

---