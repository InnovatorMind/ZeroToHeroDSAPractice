
## **1. What is Merge Sort?**

Merge Sort is a **divide and conquer** algorithm that:

1. **Divides** the array into smaller parts.
2. **Sorts** each part recursively.
3. **Merges** the sorted parts back together.

It’s **stable** (keeps equal elements in order) and has a **guaranteed O(n log n)** time complexity.

---

## **2. How it works (step-by-step)**

Let’s say we have:

```
[38, 27, 43, 3, 9, 82, 10]
```

### **Step 1 — Divide**

Keep splitting until each subarray has **one element**:

```
[38, 27, 43, 3, 9, 82, 10]
→ [38, 27, 43, 3]   [9, 82, 10]
→ [38, 27]  [43, 3]   [9, 82]  [10]
→ [38] [27]  [43] [3]   [9] [82]  [10]
```

---

### **Step 2 — Merge and Sort**

Now merge **two sorted arrays** at a time:

```
[38] [27] → [27, 38]
[43] [3]  → [3, 43]
[9]  [82] → [9, 82]
[10]       (alone)
```

Then:

```
[27, 38] [3, 43] → [3, 27, 38, 43]
[9, 82]  [10]    → [9, 10, 82]
```

Finally:

```
[3, 27, 38, 43] [9, 10, 82] → [3, 9, 10, 27, 38, 43, 82]
```

---

## **3. Pseudocode**

```
mergeSort(array):
    if array has 1 or 0 elements:
        return array
    mid = size / 2
    left = mergeSort(array[0...mid-1])
    right = mergeSort(array[mid...end])
    return merge(left, right)
```

---

## **4. C++ Implementation**

```cpp
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(vector<int> &arr, int left, int right) {
    if (left >= right) return;
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    mergeSort(arr, 0, arr.size() - 1);

    for (int x : arr) cout << x << " ";
    return 0;
}
```

---

## **5. Complexity**

* **Time**:

  * Best, Worst, Average: **O(n log n)**
* **Space**:

  * O(n) extra space (because of temporary arrays)
* **Stable**:

  * ✅ Yes

---

## **6. When to Use Merge Sort**

✅ When **stability** matters
✅ When dealing with **linked lists** (no extra memory needed there)
✅ When you need **predictable O(n log n)** performance (unlike Quick Sort)

❌ Not great if **memory is very tight** (extra O(n) space usage)
❌ Usually slower than `std::sort` for in-memory arrays because of memory allocations

---
