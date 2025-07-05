---

## 🔹 3. `equal` – Check if two ranges are the same

### ✅ Purpose:

`equal` compares two sequences **element by element** and returns `true` if they are all equal.

---

### 🔧 Syntax:

```cpp
equal(first1, last1, first2); // compares [first1, last1) with [first2, first2 + (last1 - first1))
```

---

### 🧪 Example Code:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>  // for equal
using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {1, 2, 3, 4};

    if (equal(a.begin(), a.end(), b.begin())) {
        cout << "The vectors are equal." << endl;
    } else {
        cout << "The vectors are NOT equal." << endl;
    }

    return 0;
}
```

---

### 📌 Notes:

* Both ranges should be **of the same size**, otherwise it can lead to undefined behavior.
* You can also use a **custom comparison** by adding a 4th parameter (`equal(..., ..., ..., comparator)`).

---

### ✅ Real-World Use Cases:

* Comparing two arrays or vectors for equality.
* Checking if a substring matches part of another string (compare a slice).
* Testing if two passwords match in a login system.

---

## 🧠 Practice Questions for `equal`

### Q1. Compare two strings:

```cpp
string s1 = "hello";
string s2 = "hello";
```

> Are they equal?

---

### Q2. Compare part of a vector:

```cpp
vector<int> full = {1, 2, 3, 4, 5};
vector<int> part = {2, 3, 4};
```

> Check if `part` matches the middle of `full` starting from index 1.

*Hint: `equal(part.begin(), part.end(), full.begin() + 1)`*

---

### Q3. Compare with a custom rule:

> Compare two vectors element by element but consider them equal **if their absolute values match**.

```cpp
vector<int> a = {-1, -2, -3};
vector<int> b = {1, 2, 3};
```

*Hint: Use a lambda function:*

```cpp
equal(a.begin(), a.end(), b.begin(), [](int x, int y){ return abs(x) == abs(y); });
```

---
