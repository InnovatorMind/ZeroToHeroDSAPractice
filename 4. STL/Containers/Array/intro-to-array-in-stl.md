Perfect! Let’s explore **Array** in **C++ STL** — it’s different from regular arrays and has some extra powers thanks to the Standard Template Library.

---

## 🔹 What is `std::array`?

`std::array` is a **wrapper around a static array** (fixed-size array) that:

* Adds **extra safety** (like bounds checking with `.at()`)
* Supports STL algorithms (like `sort`, `find`, etc.)
* Is part of **C++11 and above**

---

### 🔸 Header File

```cpp
#include <array>
```

---

### 🔸 Syntax

```cpp
std::array<int, 5> arr = {1, 2, 3, 4, 5};
```

Here `int` is the data type and `5` is the fixed size.

---

## 🔹 Features and Functions

| Function                            | Use                                              |
| ----------------------------------- | ------------------------------------------------ |
| `arr.size()`                        | Returns the size of the array                    |
| `arr.at(i)`                         | Returns element at index `i` (with bounds check) |
| `arr[i]`                            | Returns element at index `i`                     |
| `arr.front()`                       | First element                                    |
| `arr.back()`                        | Last element                                     |
| `arr.fill(val)`                     | Fills all elements with `val`                    |
| `arr.begin()`/`arr.end()`           | Iterators f or STL algorithms                     |
| `std::sort(arr.begin(), arr.end())` | Sorts the array                                  |

---

### 🔸 Example Code

```cpp
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
    std::array<int, 5> arr = {10, 5, 3, 7, 1};

    cout << "Original: ";
    for (int i : arr) cout << i << " ";
    cout << endl;

    std::sort(arr.begin(), arr.end());

    cout << "Sorted: ";
    for (int i : arr) cout << i << " ";
    cout << endl;

    cout << "Front: " << arr.front() << ", Back: " << arr.back() << endl;
}
```

---

## 🔄 Difference: `array` vs `vector` vs raw array

| Feature        | `array` (STL) | `vector` | Raw array |
| -------------- | ------------- | -------- | --------- |
| Size           | Fixed         | Dynamic  | Fixed     |
| Memory         | Stack         | Heap     | Stack     |
| STL algorithms | ✅ Yes         | ✅ Yes    | ❌ Limited |
| Resizing       | ❌ No          | ✅ Yes    | ❌ No      |

---

## 🔧 When to Use `std::array`

✅ You know the size at compile time
✅ You want STL functions + safety
❌ You don't need dynamic resizing

---

Would you like a **practice problem** using `std::array` next?
