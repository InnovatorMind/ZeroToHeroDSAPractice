
### 🚀 Step 1: What Is Sorting in STL?

**STL (Standard Template Library)** provides built-in sorting tools. These algorithms work on containers like `vector`, `array`, `deque`, etc., and use **iterators** to define the range being sorted.

---

### 🧩 Step 2: Core Sorting Algorithms Overview

| Algorithm             | Purpose                                | Stable? | Time Complexity  | Use Case                      |
|----------------------|----------------------------------------|---------|------------------|-------------------------------|
| `std::sort`          | Sorts entire range                     | ❌      | \( O(n \log n) \) | General fast sorting         |
| `std::stable_sort`   | Sorts while preserving equal order     | ✅      | \( O(n \log^2 n) \) or better | Sorting with stable behavior |
| `std::partial_sort`  | Sorts the top `k` smallest elements    | ❌      | \( O(n \log k) \) | Top-k problems                |
| `std::nth_element`   | Places nth element at correct spot     | ❌      | \( O(n) \) avg    | Quick selection               |
| `std::partial_sort_copy` | Sorts part of a range into a new container | ❌ | \( O(n \log k) \) | Copy & sort top-k separately |
| `std::sort_heap`     | Sorts a heap                           | ❌      | \( O(n \log n) \) | Heap to sorted list          |

---

### 📦 Step 3: Hands-On Example (with `std::sort`)

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {4, 1, 7, 3, 9};
    
    // Ascending sort
    std::sort(nums.begin(), nums.end());

    // Print result
    for (int num : nums)
        std::cout << num << " ";
}
```

Want to sort in descending order or custom objects? Just add a comparator:
```cpp
std::sort(nums.begin(), nums.end(), std::greater<int>());
```

---

### 🧠 Step 4: Choosing the Right Tool

- Use `std::sort` when speed matters and stability doesn’t.
- Use `std::stable_sort` when order of equal elements matters (like sorting by name then score).
- Use `std::nth_element` when you only care about getting the nth ranked value.
- Use `std::partial_sort` or `partial_sort_copy` when you want the top-k elements efficiently.

---