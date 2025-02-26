# Exercise 2: Overriding Methods in Derived Classes

## **Objective:**

Demonstrate method overriding and the use of virtual functions in C++.

## **Task:**

1. **Define a base class** `Shape` with:

   - Method `area()` that returns 0.

2. **Define derived classes**:

   - **`Rectangle`** inheriting from `Shape`, with attributes:
     - `width` (double)
     - `height` (double)
     - Override `area()` to return `width * height`.

   - **`Circle`** inheriting from `Shape`, with attribute:
     - `radius` (double)
     - Override `area()` to return `pi * radius * radius`.
     - Use `const double pi = 3.1416;`

3. **Use virtual functions**:

   - Declare `area()` in `Shape` as a virtual function.

4. **In your `main` function**:

   - Create an array of pointers to `Shape` of size 2.
   - Assign a `Rectangle` object and a `Circle` object to the array.
   - Initialize their dimensions.
   - Use a loop to iterate through the array and display the area of each shape.

## **Expected Output:**

```
Area of shape 1: 20.00
Area of shape 2: 28.27
```

---

**Instructions:**

- Write your code in a file named `Exercise2.cpp`.
- Ensure proper use of virtual functions to achieve runtime polymorphism.
- Format the output to show two decimal places.

---

**Hints:**

- Remember to use pointers to base class `Shape` to store derived class objects.
- Override the `area()` method in each derived class with the appropriate formula.

---