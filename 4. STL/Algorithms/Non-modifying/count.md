---

## 🔹 2. `count` – Count how many times a value appears

### ✅ Purpose:

`count` counts the number of occurrences of a specific value in a container.

---

### 🔧 Syntax:

```cpp
count(start, end, value);
```

---

### 🧪 Example Code:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>  // for count
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 2, 4, 2, 5};

    int target = 2;
    int total = count(nums.begin(), nums.end(), target);

    cout << target << " appears " << total << " times." << endl;

    return 0;
}
```

---

### 📌 Notes:

* `count` works on all standard containers (vector, string, list, array, etc.)
* It's simple and doesn’t require any loop writing.

---

## 🧠 Practice Questions for `count`

### Q1. Count how many times `0` appears in a vector:

```cpp
vector<int> data = {0, 1, 0, 2, 0, 3, 0};
```

---

### Q2. Count how many times `'a'` appears in a string:

```cpp
string name = "ananya";
```

---

### Q3. In a list of numbers from user input, count how many are divisible by 3

> Bonus: You’ll need to use `count_if` instead of `count`.
> *(Let me know when you want to explore `count_if` and `find_if` together.)*

---