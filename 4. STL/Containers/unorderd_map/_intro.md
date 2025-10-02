
---

## 🧠 What Is an `unordered_map`?

An `unordered_map` stores elements in **no particular order**, and provides **average constant time** complexity for insertion, deletion, and lookup.

`unordered_map` stores **only key-value pairs**.
Each element in the map consists of:
- A **key**: used to uniquely identify the element.
- A **value**: the data associated with that key.

Think of it like a dictionary:
```cpp
unordered_map<string, int> age;
age["Alice"] = 25;
age["Bob"] = 30;
```

---

## 🔧 How to Include and Declare

```cpp
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> age;
    age["Alice"] = 25;
    age["Bob"] = 30;

    cout << "Alice is " << age["Alice"] << " years old.\n";
}
```

---

## 🧩 Key Features

- **No duplicates**: Each key is unique.
- **Fast access**: Uses hashing for quick lookup.
- **No order guarantee**: Unlike `map`, it doesn’t sort keys.

---

## 📦 Common Operations

| Operation        | Code Example                          | Description                          |
|------------------|----------------------------------------|--------------------------------------|
| Insert           | `um["key"] = value;`                   | Adds or updates a key-value pair     |
| Access           | `um["key"]` or `um.at("key")`          | Retrieves value                      |
| Check existence  | `um.count("key")` or `um.find("key")`  | Returns 1 if key exists, else 0      |
| Erase            | `um.erase("key");`                     | Removes key-value pair               |
| Size             | `um.size();`                           | Number of elements                   |
| Iterate          | `for (auto &p : um)`                   | Loop through all pairs               |

---

## 🧪 Example with Iteration

```cpp
unordered_map<string, int> scores;
scores["John"] = 90;
scores["Jane"] = 85;

for (auto &pair : scores) {
    cout << pair.first << " scored " << pair.second << endl;
}
```

---

## ⚠️ Pitfalls to Watch

- Accessing a non-existent key with `[]` creates it with default value.
- Use `at()` if you want bounds checking (throws exception if key not found).
- Hash collisions can affect performance in rare cases.

---

## 🧠 Behind the Scenes

Internally, `unordered_map` uses a **hash table**. Each key is hashed to an index, and values are stored in buckets. This is why access is fast but order is unpredictable.

---

Would you like to go deeper into how hashing works, or maybe compare `unordered_map` with `map` and `vector`? Or we could build a mini project using it—like a frequency counter or a leaderboard.


Yes, exactly — an 

### 🔍 Example
```cpp
unordered_map<string, int> age;
age["Alice"] = 25;  // "Alice" is the key, 25 is the value
age["Bob"] = 30;
```

Internally, it's like:
```
{
  "Alice": 25,
  "Bob": 30
}
```

You can’t store just a single value or just a key — both are required. If you want to store only values, you'd use a `vector`. If you want only keys, maybe a `set`.

---

### 🧠 Bonus Tip: You can use any type for key and value
As long as the key type is **hashable** (i.e., it can be passed to a hash function), you can use:
- `int`, `string`, `char`, `pair<int, int>`, even custom structs (with a hash function)
- Values can be anything: `int`, `string`, `vector`, etc.

Would you like to try building a mini example like a frequency counter or a phonebook?