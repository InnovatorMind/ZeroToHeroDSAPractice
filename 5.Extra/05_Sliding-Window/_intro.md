
---

## 🌊 What is Sliding Window?

Imagine you have a **window** (a fixed or flexible range) that moves (or “slides”) over your data — like scanning a portion of it at a time.

Instead of recalculating something for every possible subarray or substring,
you **reuse previous computations** smartly when the window slides forward.

---

## ⚙️ The Core Idea

You maintain a *window* of elements (usually a subarray or substring) that represents a **current state or condition**.

When you move the window:

* You **add** a new element (entering the window).
* You **remove** an old element (leaving the window).
* You **update** your result accordingly without recomputing everything.

This gives you **O(n)** efficiency instead of **O(n²)**.

---

## 🧩 Let’s take an example

### ❌ Brute force

Say you want to find the **maximum sum of any subarray of size `k`** in an array.

Example:
`arr = [2, 1, 5, 1, 3, 2], k = 3`

**Brute force:**
Check all subarrays of size 3:

```
[2,1,5] → sum = 8  
[1,5,1] → sum = 7  
[5,1,3] → sum = 9  
[1,3,2] → sum = 6
```

Max sum = 9
✅ Correct
❌ But Time Complexity = O(n*k)

---

### ✅ Sliding Window Solution

Instead of recalculating sum every time, we **slide the window** forward:

1. Calculate the sum of the first window → `2 + 1 + 5 = 8`
2. When moving one step right:

   * Remove `2` (leftmost element)
   * Add `1` (next element)
   * New sum = `8 - 2 + 1 = 7`
3. Continue:

   * Remove `1`, add `3` → sum = `7 - 1 + 3 = 9`
   * Remove `5`, add `2` → sum = `9 - 5 + 2 = 6`

Max sum = **9**
✅ Time Complexity = **O(n)**
✅ Space Complexity = **O(1)**

---

## 🧠 Two Main Types of Sliding Windows

### 1. **Fixed-size window**

* The window has a constant length `k`.
* Used for problems like:

  * Maximum/minimum sum of subarray of size `k`
  * Average of subarray of size `k`
  * Number of distinct elements in subarray of size `k`

### 2. **Variable-size window**

* The window expands or shrinks based on conditions.
* Used for:

  * Longest substring without repeating characters
  * Smallest subarray with a sum ≥ target
  * Longest substring with at most K distinct characters

---

## 🧩 Example of Variable Window

**Problem:** Longest substring without repeating characters
`str = "abcabcbb"`

We use two pointers:

```
start = 0
end = 0
seen = {}
max_len = 0
```

Process:

```
'a' not seen → window: "a", len = 1
'b' not seen → "ab", len = 2
'c' not seen → "abc", len = 3
'a' repeated → move start to after previous 'a'
```

The window keeps adjusting dynamically:

* Expand when characters are unique.
* Shrink when repetition happens.

**Result:** Longest substring = `"abc"`, length = 3
✅ Time Complexity = O(n)

---

## 🪄 The Pattern (Algorithmic Template)

### Fixed-size:

```js
let windowSum = 0, maxSum = 0;
for (let i = 0; i < arr.length; i++) {
  windowSum += arr[i];
  if (i >= k - 1) {
    maxSum = Math.max(maxSum, windowSum);
    windowSum -= arr[i - (k - 1)];
  }
}
```

### Variable-size:

```js
let left = 0;
for (let right = 0; right < arr.length; right++) {
  // Expand window by including arr[right]
  
  while (condition_not_satisfied) {
    // Shrink window from the left
    left++;
  }

  // Update result here
}
```

---

## 🧮 Time Complexity

Sliding window generally reduces problems from:

* **O(n²)** → **O(n)**
  because we don’t reprocess elements unnecessarily.

---

## 💡 When to Use Sliding Window

Whenever you see:

* Contiguous subarrays/substrings
* Optimization problems like:

  * “Maximum/Minimum sum”
  * “Longest/Shortest substring”
  * “Number of subarrays meeting condition”
* And when brute force involves nested loops

👉 Think “Can I use Sliding Window?”

---

## 🔍 Analogy (for Intuition)

Imagine reading a book line by line with a magnifying glass that covers only 3 words at a time.
Instead of restarting from the beginning each time, you just slide the glass one word forward — reusing what you already read.
That’s the **Sliding Window** concept.

---

## 🌊 1. The Big Picture: What "Sliding Window" Really Means

Imagine you have a **sequence** — like an array or string.

Now, you’re trying to **analyze consecutive elements** — e.g.:

* “Find the max sum of any 3 consecutive numbers.”
* “Find the longest substring without repeating characters.”
* “Count subarrays with sum ≤ X.”

A **sliding window** helps you move through these consecutive elements **efficiently** by:

* Keeping track of the elements inside your current range (the “window”)
* Sliding the range forward (instead of restarting every time)

---

## ⚙️ 2. Core Mechanism (Conceptually)

### Step-by-step:

1. **Initialize** a window — start and end pointers (`left` and `right`).
2. **Expand** the window (usually by moving `right`) to include more elements.
3. **Shrink** the window (by moving `left`) when a condition is violated.
4. **Update** the result (max, min, count, etc.) during each valid state.
5. Continue sliding until you reach the end of the array.

---

## 🧩 3. Types of Sliding Windows

### (A) Fixed-size Window

👉 Window size is **constant** (like `k` elements).

Used for problems like:

* Max/Min/Average of `k` consecutive elements
* Sum of subarray of length `k`

---

### (B) Variable-size Window

👉 Window size **changes dynamically** based on a condition.

Used for problems like:

* Longest substring without repeating characters
* Smallest subarray with sum ≥ target

---

## ⚡ 4. Example 1: Fixed-size Window (in C++)

### 🧠 Problem:

Find the **maximum sum** of any contiguous subarray of size `k`.

**Input:**
`arr = [2, 1, 5, 1, 3, 2]`, `k = 3`
**Output:** `9` (from subarray `[5, 1, 3]`)

---

### 💻 C++ Implementation:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int maxSumSubarrayOfSizeK(vector<int>& arr, int k) {
    int windowSum = 0;
    int maxSum = 0;
    int start = 0;

    for (int end = 0; end < arr.size(); end++) {
        // Add next element
        windowSum += arr[end];

        // When we reach window size 'k'
        if (end >= k - 1) {
            maxSum = max(maxSum, windowSum);
            // Slide the window forward: remove the element going out
            windowSum -= arr[start];
            start++;
        }
    }
    return maxSum;
}

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;
    cout << "Maximum sum of subarray of size " << k << " = "
         << maxSumSubarrayOfSizeK(arr, k) << endl;
    return 0;
}
```

### 🧩 Output:

```
Maximum sum of subarray of size 3 = 9
```

### 🔍 Explanation:

| Step    | Window | Window Sum | Max Sum |
| ------- | ------ | ---------- | ------- |
| [2,1,5] | 8      | 8          |         |
| [1,5,1] | 7      | 8          |         |
| [5,1,3] | 9      | 9          |         |
| [1,3,2] | 6      | 9          |         |

✅ Time: **O(n)**
✅ Space: **O(1)**

---

## ⚡ 5. Example 2: Variable-size Window (in C++)

### 🧠 Problem:

Find the **length of the longest substring without repeating characters**.

**Input:** `"abcabcbb"`
**Output:** `3` (from `"abc"`)

---

### 💻 C++ Implementation:

```cpp
#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int longestUniqueSubstring(string s) {
    unordered_set<char> window;
    int left = 0, maxLen = 0;

    for (int right = 0; right < s.size(); right++) {
        // If current character already in window, shrink from left
        while (window.find(s[right]) != window.end()) {
            window.erase(s[left]);
            left++;
        }

        // Expand window
        window.insert(s[right]);
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}

int main() {
    string s = "abcabcbb";
    cout << "Length of longest unique substring = "
         << longestUniqueSubstring(s) << endl;
    return 0;
}
```

### 🧩 Output:

```
Length of longest unique substring = 3
```

### 🔍 Visualization:

| Step                         | Window | Max Length |
| ---------------------------- | ------ | ---------- |
| a                            | 1      |            |
| ab                           | 2      |            |
| abc                          | 3      |            |
| abc → (repeat a) → move left | 3      |            |
| bca                          | 3      |            |
| cab                          | 3      |            |

✅ Time: **O(n)**
✅ Space: **O(n)**

---

## 🧠 6. Why It’s Powerful

| Brute Force                            | Sliding Window                        |
| -------------------------------------- | ------------------------------------- |
| Recomputes every subarray from scratch | Reuses info from previous window      |
| Often O(n²)                            | Usually O(n)                          |
| Inefficient for large input            | Optimal for contiguous range problems |

---

## 💡 7. Key Intuitions to Build Sliding Window Solutions

1. Identify if the problem involves **contiguous** elements.
2. See if you can **reuse previous results** when moving the window.
3. Maintain variables like:

   * `windowSum`, `windowSet`, `freqMap`
   * `left` and `right` pointers
4. When the window violates a rule → **shrink** it.
5. When valid → **expand** or **record result**.

---

## 🧭 Summary Table

| Type     | Window Size     | Typical Use Case                          | Example                    |
| -------- | --------------- | ----------------------------------------- | -------------------------- |
| Fixed    | Constant (`k`)  | Subarray sum, average                     | Max sum subarray of size k |
| Variable | Expands/Shrinks | Longest substring without repeating chars | Longest unique substring   |

---


