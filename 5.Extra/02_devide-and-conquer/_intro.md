
# 📚 Divide and Conquer (D&C) – Notes

## 1. Introduction
**Divide and Conquer** is a problem-solving strategy where a big problem is broken down into smaller subproblems, solved individually, and their results combined.
 Divide and Conquer almost always uses recursion to solve subproblems.


## 2. Steps of Divide and Conquer
Every D&C algorithm follows this structure:

1. **Divide** → Break the problem into smaller subproblems.
2. **Conquer** → Solve each subproblem (often recursively).
3. **Combine** → Merge the solutions to solve the original problem.

---

## 3. Real-life Analogy
Sorting a huge pile of papers:
- Split the pile into smaller piles (**Divide**)
- Sort each pile individually (**Conquer**)
- Combine sorted piles back together (**Combine**)

---

## 4. Characteristics
A problem is suitable for D&C if:
- It can be split into **smaller independent subproblems**.
- Subproblems are **similar** to the original problem.
- Solutions to subproblems can be **combined** to solve the larger problem.

---

## 5. Common Examples
| Problem | Algorithm |
|---------|-----------|
| Searching | Binary Search |
| Sorting | Merge Sort, Quick Sort |
| Matrix Multiplication | Strassen's Algorithm |
| Geometry | Closest Pair of Points |
| Math | Fast Exponentiation, Karatsuba Multiplication |

---

## 6. Example – Binary Search
**Idea**:
- Check the middle element.
- If it matches → found.
- Else, search in the left or right half.

**Code**:
```cpp
int binarySearch(int arr[], int left, int right, int x) {
    if (left > right) return -1;
    int mid = left + (right - left) / 2;
    if (arr[mid] == x) return mid;
    if (arr[mid] > x) return binarySearch(arr, left, mid - 1, x);
    return binarySearch(arr, mid + 1, right, x);
}
````

## 7. Example – Merge Sort

**Steps**:

1. Split array into two halves.
2. Recursively sort each half.
3. Merge the sorted halves.

**Visualization**:

```
[38, 27, 43, 3, 9, 82, 10]
→ [38, 27, 43, 3]   [9, 82, 10]
→ [38, 27]  [43, 3]   [9, 82]  [10]
→ [38] [27]  [43] [3]  [9] [82] [10]
→ [27, 38]  [3, 43]  [9, 82]  [10]
→ [3, 27, 38, 43]  [9, 10, 82]
→ [3, 9, 10, 27, 38, 43, 82]
```

**Code**:

```cpp
void mergeSort(vector<int> &arr, int left, int right) {
    if (left >= right) return;
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}
```

---

## 8. Advantages

✅ Reduces complexity in many problems (e.g., O(n²) → O(n log n))
✅ Easy to implement with recursion
✅ Good for parallel computing

---

## 9. Disadvantages

❌ Recursive calls may increase memory usage
❌ Some algorithms require extra space (e.g., Merge Sort needs O(n) extra memory)

---

## 10. General Template

```
function solve(problem):
    if problem is small enough:
        solve directly
        return
    divide problem into subproblems
    solve subproblems recursively
    combine subproblem solutions
```

---

## 11. Complexity Pattern

If a D\&C algorithm divides a problem of size `n` into `a` subproblems of size `n/b`,
and the combine step takes `O(n^d)` time, complexity is given by:

**Master Theorem**:

```
T(n) = aT(n/b) + O(n^d)
```

---

```

---