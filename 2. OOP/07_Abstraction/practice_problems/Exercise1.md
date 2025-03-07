# Exercise 1: Implementing an Abstract Class

## Objective:

Create an abstract class `Animal` with a pure virtual function `speak()`. Then, derive two classes `Dog` and `Cat` that implement `speak()`.

## Task:

1. **Define an abstract class** `Animal` with:
   - A pure virtual function: `virtual void speak() = 0;`

2. **Create two derived classes:**
   - `Dog`: Override `speak()` to output "Woof!"
   - `Cat`: Override `speak()` to output "Meow!"

3. **In your `main` function:**
   - Create pointers of type `Animal` pointing to `Dog` and `Cat` objects.
   - Call `speak()` through the base class pointers.

## Expected Output:

```
Dog says: Woof!
Cat says: Meow!
```

---

**Instructions:**
- Write your code in a file named `Exercise1.cpp`.
- Use proper access specifiers and clean code practices.
```
