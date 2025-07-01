## 🧠 Problem: **Sliding Window Maximum**

You are given an array of integers and a window size `k`. Your task is to print the **maximum** of every contiguous subarray of size `k`.

---

### 📥 Input:

* An array `arr[]` of `n` integers.
* An integer `k` (window size).

---

### 📤 Output:

* Print the maximum of each window (space-separated).

---

### 🔹 Example:

**Input:**

```cpp
arr[] = {1, 3, -1, -3, 5, 3, 6, 7}
k = 3
```

**Output:**

```
3 3 5 5 6 7
```

---

### 📘 Explanation:

Windows of size 3:

* \[1, 3, -1] → max = 3
* \[3, -1, -3] → max = 3
* \[-1, -3, 5] → max = 5
* \[-3, 5, 3] → max = 5
* \[5, 3, 6] → max = 6
* \[3, 6, 7] → max = 7

---

### 💡 Hint:

Use a **deque** to:

* Store indices of useful elements
* Keep elements **in decreasing order**
* Remove elements **out of window range**

---

### 🔧 Bonus Tip:

Deque helps maintain a "max candidate list" by:

* Removing smaller elements from the back (not useful)
* Removing elements out of the current window from the front

---
