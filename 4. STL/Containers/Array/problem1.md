## 🧠 Problem: **Find Second Largest Element**

Given a fixed-size array of integers, write a C++ program using `std::array` to find the **second largest** element in the array.

---

### 🔹 Input:

A fixed array, for example:

```cpp
std::array<int, 6> arr = {10, 20, 5, 8, 70, 70};
```

### 🔹 Output:

```
Second largest element: 20
```

---

### 🧾 Constraints:

* Size is known and fixed.
* No need to take input from user.
* You should handle **duplicate max values** (like two 70s).

---

### 💡 Hint:

* You can use:

  * Manual iteration with two variables: `first_max`, `second_max`
  * Or sort the array and find second largest from the back while skipping duplicates

---

### 🧪 Challenge:

Write two versions:

1. Without sorting (O(n))
2. With `std::sort()` (O(n log n))

---

### ⚙️ Starter Template

```cpp
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
    array<int, 6> arr = {10, 20, 5, 8, 70, 70};

    // Your logic here

    return 0;
}
```

---
