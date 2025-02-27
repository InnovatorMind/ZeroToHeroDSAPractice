# Exercise 2: Use Virtual Functions in a Class Hierarchy

## Objective:

Demonstrate runtime polymorphism by creating a base class with a virtual method and overriding it in derived classes.

## Task:

1. **Define a base class** `Vehicle` with:
   - A virtual method `getMaxSpeed()` that returns 0.

2. **Define two derived classes**:
   - **`Car`**: Inherits from `Vehicle` and contains a private attribute `maxSpeed` (double). Override `getMaxSpeed()` to return `maxSpeed`.
   - **`Motorcycle`**: Inherits from `Vehicle` and contains a private attribute `maxSpeed` (double). Override `getMaxSpeed()` to return `maxSpeed`.

3. **In your `main` function:**
   - Create an array of `Vehicle` pointers.
   - Allocate a `Car` object and a `Motorcycle` object with different speeds.
   - Use a loop to call `getMaxSpeed()` on each object, displaying the results.

## Expected Output:

```
Max speed of vehicle 1: 180.00
Max speed of vehicle 2: 150.00
```

---

**Instructions:**

- Write your code in a file named `Exercise2.cpp`.
- Use pointers to base class `Vehicle` to store derived class objects.
- Format the output to two decimal places.
```
