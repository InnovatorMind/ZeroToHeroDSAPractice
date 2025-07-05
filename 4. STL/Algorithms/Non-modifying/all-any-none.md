---

## ✅ Purpose:

| Algorithm | Returns `true` if...                       |
| --------- | ------------------------------------------ |
| `all_of`  | All elements match the condition           |
| `any_of`  | At least one element matches the condition |
| `none_of` | None of the elements match the condition   |

They all require a **predicate** — a function or lambda that returns `true` or `false`.

---

## 🧪 Example Code:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>  // for all_of, any_of, none_of
using namespace std;

int main() {
    vector<int> nums = {2, 4, 6, 8};

    bool allEven = all_of(nums.begin(), nums.end(), [](int x) {
        return x % 2 == 0;
    });

    bool anyOdd = any_of(nums.begin(), nums.end(), [](int x) {
        return x % 2 != 0;
    });

    bool noneNegative = none_of(nums.begin(), nums.end(), [](int x) {
        return x < 0;
    });

    cout << "All even? " << allEven << endl;
    cout << "Any odd? " << anyOdd << endl;
    cout << "None negative? " << noneNegative << endl;

    return 0;
}
```

---

### 📌 Output:

```
All even? 1
Any odd? 0
None negative? 1
```

---

### ✅ Real-World Uses:

* Check if all test scores are passing (`all_of`)
* Check if any user is an admin (`any_of`)
* Check if no product is out of stock (`none_of`)

---

## 🧠 Practice Questions

### Q1. Check if all characters in a string are lowercase:

```cpp
string word = "hello";
```

---

### Q2. Check if any number is divisible by 5:

```cpp
vector<int> nums = {1, 2, 9, 10, 13};
```

---

### Q3. Check if none of the students scored below 0:

```cpp
vector<int> marks = {40, 35, 50, 20, 0};
```

---