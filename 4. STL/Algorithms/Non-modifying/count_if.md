---

## 🔹 Why `count` is **not enough** sometimes

The regular `count` works **only when you're looking for a specific value**.

For example:

```cpp
count(vec.begin(), vec.end(), 3);  // counts all 3s
```

But what if you want to count:

* All numbers **greater than 10**?
* All numbers **divisible by 3**?
* All characters that are **vowels**?

➡️ In those cases, you need something more flexible: **`count_if`**

---

## 🔹 What is `count_if`?

`count_if` counts how many elements satisfy a **condition**, not just a value.

### 🔧 Syntax:

```cpp
count_if(start, end, condition);
```

The condition is usually written using a **lambda expression**.

---

## ✅ Example: Count numbers divisible by 3

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {3, 5, 6, 9, 10, 12, 14};

    int total = count_if(nums.begin(), nums.end(), [](int x) {
        return x % 3 == 0;
    });

    cout << "Numbers divisible by 3: " << total << endl;
    return 0;
}
```

### 🧠 What's Happening?

* The lambda function `[](int x) { return x % 3 == 0; }` checks if `x` is divisible by 3.
* `count_if` applies this function to each element.
* It returns how many elements matched the condition.

---

## 🤔 Comparison: `count` vs `count_if`

| Purpose                    | Use `count`                    | Use `count_if`                                                  |
| -------------------------- | ------------------------------ | --------------------------------------------------------------- |
| Count exact matches        | `count(v.begin(), v.end(), 5)` | ❌                                                               |
| Count based on a condition | ❌                              | `count_if(v.begin(), v.end(), [](int x){ return x % 2 == 0; })` |

---

