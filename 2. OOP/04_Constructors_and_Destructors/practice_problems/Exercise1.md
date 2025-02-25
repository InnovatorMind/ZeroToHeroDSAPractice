# Exercise 1: Using Constructors to Initialize Objects

## **Objective:**

Create a class with multiple constructors to initialize objects in different ways.

## **Task:**

1. **Define a class** named `Time` with private attributes:
   - `hours` (int)
   - `minutes` (int)

2. **Implement the following constructors:**
   - **Default Constructor:**
     - Sets `hours` and `minutes` to 0.
   - **Parameterized Constructor:**
     - Accepts two integers to initialize `hours` and `minutes`.
     - Ensure that `minutes` is less than 60. If not, adjust `hours` and `minutes` accordingly (e.g., 75 minutes becomes 1 hour 15 minutes).
   - **Copy Constructor:**
     - Initializes a new object using an existing `Time` object.

3. **Include a method:**
   - `displayTime()`: Displays the time in `HH:MM` format.

4. **In your `main` function:**
   - Create three objects using each of the constructors:
     - `t1` using the default constructor.
     - `t2` using the parameterized constructor with values `(2, 50)`.
     - `t3` as a copy of `t2`.
   - Display the time for each object.

## **Example Output:**

```
Time: 00:00
Time: 2:50
Time: 2:50
```

---

**Instructions:**

- Write your code in a file named `Exercise1.cpp`.
- Ensure proper handling of minutes exceeding 59 in the parameterized constructor.
- Use initialization lists where appropriate.

---

**Hints:**

- You can adjust `hours` and `minutes` using division and modulus operators.
- Remember to pass objects by reference in the copy constructor.

---
