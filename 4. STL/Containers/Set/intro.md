

## 🔹 What is `std::set`?

`std::set` is an **ordered container** in the C++ STL that:

* Stores **unique** elements only
* Keeps elements in **sorted order** (by default: ascending)
* Uses a **self-balancing binary search tree (like Red-Black Tree)** internally

---

### 🔸 Header File

```cpp
#include <set>
```

---

### 🔸 Syntax

```cpp
std::set<int> mySet;
```

You can also use:

```cpp
std::set<std::string> nameSet;
std::set<char> charSet;
```

---

## 🔹 Common Operations

| Operation       | Function Syntax       | Description                                  |
| --------------- | --------------------- | -------------------------------------------- |
| Insert          | `s.insert(val);`      | Adds value (only if not already present)     |
| Remove          | `s.erase(val);`       | Removes value if present                     |
| Check existence | `s.find(val)`         | Returns iterator (or `s.end()` if not found) |
| Size            | `s.size();`           | Number of elements                           |
| Clear           | `s.clear();`          | Removes all elements                         |
| Iterate         | `for(auto x : s)`     | Loop through all elements (sorted)           |
| Lower bound     | `s.lower_bound(val);` | First element `>= val`                       |
| Upper bound     | `s.upper_bound(val);` | First element `> val`                        |

---

### 🔸 Example Code

```cpp
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(10); // Will NOT be inserted again

    cout << "Elements in set: ";
    for (int x : s)
        cout << x << " ";  // Output: 5 10 20 (sorted and unique)
    
    if (s.find(10) != s.end())
        cout << "\n10 is in the set.\n";

    s.erase(10);
    cout << "After erasing 10: ";
    for (int x : s)
        cout << x << " ";  // Output: 5 20

    return 0;
}
```

---

## 🔄 Set Variants in STL

| Container            | Description                   |
| -------------------- | ----------------------------- |
| `std::set`           | Sorted, unique elements       |
| `std::multiset`      | Sorted, **allows duplicates** |
| `std::unordered_set` | Fast (O(1) average), no order |

---

## 🔧 When to Use `set`

✅ You need **unique elements**
✅ You need elements to stay **sorted**
✅ You're doing **range queries**, **existence checks**, or **auto sorting**

---

Would you like a **practice problem** using `set` next?
