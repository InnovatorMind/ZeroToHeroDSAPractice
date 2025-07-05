---

## 🔹 4. `search` – Find a subsequence inside a larger sequence

### ✅ Purpose:

`search` looks for the **first occurrence of a full subsequence** (like a smaller vector) inside another sequence.

---

### 🔧 Syntax:

```cpp
search(main_start, main_end, sub_start, sub_end);
```

---

### 🧪 Example Code:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>  // for search
using namespace std;

int main() {
    vector<int> mainVec = {5, 10, 20, 30, 40, 50};
    vector<int> subVec = {30, 40};

    auto it = search(mainVec.begin(), mainVec.end(), subVec.begin(), subVec.end());

    if (it != mainVec.end()) {
        cout << "Subsequence found at index " << (it - mainVec.begin()) << endl;
    } else {
        cout << "Subsequence not found." << endl;
    }

    return 0;
}
```

---

### 📌 Notes:

* It matches **consecutive elements only**.
* You can also pass a **custom comparator** as a 5th parameter.

---

### ✅ Real-World Use Cases:

* Searching for a pattern in a dataset.
* Finding a word in a sentence stored as a vector of characters or words.
* Matching event sequences in logs.

---

## 🧠 Practice Questions for `search`

### Q1. Find a subsequence in a vector:

```cpp
vector<int> a = {1, 2, 3, 4, 5, 6};
vector<int> b = {3, 4, 5};
```

> Use `search` to find where `b` starts in `a`.

---

### Q2. Search for a word inside a sentence:

```cpp
vector<string> sentence = {"I", "love", "to", "code", "in", "C++"};
vector<string> pattern = {"code", "in"};
```

> Find the starting index of `pattern` in `sentence`.

---

### Q3. Case-insensitive search:

```cpp
vector<char> text = {'A', 'B', 'c', 'D', 'E'};
vector<char> pattern = {'c', 'd'};
```

> Match ignoring case (use `tolower()` inside a lambda comparator).

---