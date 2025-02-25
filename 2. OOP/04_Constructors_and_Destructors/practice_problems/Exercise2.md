# Exercise 2: Implementing Copy Constructors and Destructors

## **Objective:**

Understand the use of copy constructors and destructors, especially when working with dynamic memory allocation.

## **Task:**

1. **Define a class** named `Array` that manages a dynamic integer array.

2. **Private attributes:**
   - `size` (int)
   - `data` (int pointer)

3. **Implement the following:**
   - **Parameterized Constructor:**
     - Accepts an integer `s` and allocates an array of size `s`.
     - Initializes the array elements to zero.
   - **Copy Constructor:**
     - Creates a deep copy of an existing `Array` object.
   - **Destructor:**
     - Releases the allocated memory.
   - **Methods:**
     - `setValue(int index, int value)`: Sets the value at the specified index.
     - `getValue(int index)`: Returns the value at the specified index.
     - `printArray()`: Prints all elements of the array.

4. **In your `main` function:**
   - Create an `Array` object `arr1` of size 5.
   - Set values for `arr1`.
   - Create another `Array` object `arr2` as a copy of `arr1`.
   - Modify `arr2` and show that `arr1` remains unaffected.
   - Print both arrays.

## **Expected Behavior:**

- Changes to `arr2` should not affect `arr1`, demonstrating a deep copy.

---

**Instructions:**

- Write your code in a file named `Exercise2.cpp`.
- Ensure that the copy constructor performs a deep copy.
- Properly implement the destructor to avoid memory leaks.

---

**Hints:**

- In the copy constructor, allocate new memory for `data` and copy each element.
- Be careful with pointer assignments to avoid shallow copies.
- Use delete[] in the destructor to free the dynamic array.

---
