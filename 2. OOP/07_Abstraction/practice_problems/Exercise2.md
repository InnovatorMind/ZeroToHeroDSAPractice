# Exercise 2: Creating and Using an Interface

## Objective:

Design an interface for printable objects and implement it in a class.

## Task:

1. **Define an interface** (abstract class) `Printable` with:
   - A pure virtual function: `virtual void print() const = 0;`

2. **Create a class** `Report` that:
   - Inherits from `Printable`
   - Contains a private attribute: `string title`
   - Implements the `print()` function to display the title.

3. **In your `main` function:**
   - Create a `Report` object with a title.
   - Call the `print()` method on the object.

## Expected Output:

```
Report Title: Annual Financial Summary
```

---

**Instructions:**
- Write your code in a file named `Exercise2.cpp`.
- Ensure that your implementation follows the interface contract.
```
