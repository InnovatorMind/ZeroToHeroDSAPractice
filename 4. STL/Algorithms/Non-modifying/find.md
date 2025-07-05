---

## 🔹 1. `find` – Search for a specific value in a container

### ✅ Purpose:

`find` looks for the first occurrence of a specific value in a range (like a vector or array). It returns an iterator pointing to that value, or the end if not found.

### 🔧 Syntax:

```cpp
auto it = find(start, end, value);
```

---

### 🧪 Example Code:

```cpp
#include <iostream>
#include <vector>
#include <algorithm> // for find
using namespace std;

int main() {
    vector<int> nums = {10, 20, 30, 40, 50};
    int target = 30;

    auto it = find(nums.begin(), nums.end(), target);

    if (it != nums.end()) {
        cout << "Found " << target << " at index " << (it - nums.begin()) << endl;
    } else {
        cout << target << " not found!" << endl;
    }

    return 0;
}
```

---

### 🔎 Notes:

* Works with **any iterable container**: `vector`, `array`, `list`, etc.
* You can use `it - nums.begin()` to get the index (only in random-access containers like `vector`, `array`).

---

### 🧠 Try This Yourself:

1. Change the target to something not in the list (e.g., `60`) and observe the output.
2. Use `find` on a `string` instead of `vector<int>`.

Would you like to try `count` next?
