## 🔧 1. `copy` – Copy elements from one container to another

---

### ✅ Purpose:

Copies elements from one range into another container.

---

### 🔧 Syntax:

```cpp
copy(source_begin, source_end, destination_begin);
```

The destination **must be pre-allocated** (must have enough space).

---

### 🧪 Example Code:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>  // for copy
using namespace std;

int main() {
    vector<int> from = {1, 2, 3, 4, 5};
    vector<int> to(from.size());  // Allocate space

    copy(from.begin(), from.end(), to.begin());

    for (int x : to) cout << x << " ";
    return 0;
}
```

---

### 📌 Output:

```
1 2 3 4 5
```

---

### ⚠️ Common Mistake:

You **must make sure** the destination has enough space, or it leads to **undefined behavior**.

---

### ✅ Real-World Use Cases:

* Copying filtered or transformed data to a new list
* Making shallow copies of containers
* Combining it with `copy_if` to copy conditionally

---

## 🧠 Practice Questions for `copy`

### Q1. Copy a `vector<int>` to another vector and print the second one.

---

### Q2. Copy only the first 3 elements of a vector:

```cpp
vector<int> src = {10, 20, 30, 40, 50};
```

---

### Q3. Try to use `back_inserter`:

```cpp
vector<int> from = {7, 8, 9};
vector<int> to;

copy(from.begin(), from.end(), back_inserter(to));
```

> This way, you **don’t have to preallocate** the destination — it grows automatically!

---